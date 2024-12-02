
/*
Exp 11 Task 1
Title :WAP to maintain a simple empolyee database using file handling.
Name : Arhaan Mulla
Class :First Year
DIV :C
Roll no. :046
UIN :241P049
*/
#include <stdio.h>
#include <string.h>
 
#define FILENAME "employee_database.txt"
 
// Define a structure to hold employee details
struct employee {
   int id;
   char name[50];
   float salary;
};
 
// Function to add employee details to the file
void add_employee() {
   struct employee emp;
   FILE *file = fopen(FILENAME, "a");
 
   if (file == NULL) {
       printf("Error opening file!\n");
       return;
   }
 
   printf("Enter Employee ID: ");
   scanf("%d", &emp.id);
   getchar(); // Clear newline character
   printf("Enter Employee Name: ");
   fgets(emp.name, sizeof(emp.name), stdin);
   emp.name[strcspn(emp.name, "\n")] = '\0'; // Remove newline
   printf("Enter Employee Salary: ");
   scanf("%f", &emp.salary);
 
   fprintf(file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
   fclose(file);
   printf("Employee record added successfully!\n");
}
 
// Function to display all employee records from the file
void display_employees() {
   struct employee emp;
   FILE *file = fopen(FILENAME, "r");
 
   if (file == NULL) {
       printf("No employee records found!\n");
       return;
   }
 
   printf("\nEmployee Records:\n");
   printf("ID\tName\t\tSalary\n");
   printf("---------------------------------\n");
 
   while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
       printf("%d\t%-15s%.2f\n", emp.id, emp.name, emp.salary);
   }
 
   fclose(file);
}
 
// Function to edit an existing employee record
void edit_employee() {
   struct employee emp;
   int search_id, found = 0;
   FILE *file = fopen(FILENAME, "r");
   FILE *temp_file = fopen("temp.txt", "w");
 
   if (file == NULL) {
       printf("No employee records found to edit!\n");
       return;
   }
 
   printf("Enter Employee ID to edit: ");
   scanf("%d", &search_id);
 
   while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
       if (emp.id == search_id) {
           found = 1;
           printf("Enter new name: ");
           getchar();
           fgets(emp.name, sizeof(emp.name), stdin);
           emp.name[strcspn(emp.name, "\n")] = '\0'; // Remove newline
           printf("Enter new salary: ");
           scanf("%f", &emp.salary);
       }
       fprintf(temp_file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
   }
 
   fclose(file);
   fclose(temp_file);
 
   if (found) {
       remove(FILENAME);
       rename("temp.txt", FILENAME);
       printf("Employee record updated successfully!\n");
   } else {
       remove("temp.txt");
       printf("Employee with ID %d not found!\n", search_id);
   }
}
 
// Function to delete an employee record
void delete_employee() {
   struct employee emp;
   int delete_id, found = 0;
   FILE *file = fopen(FILENAME, "r");
   FILE *temp_file = fopen("temp.txt", "w");
 
   if (file == NULL) {
       printf("No employee records found to delete!\n");
       return;
   }
 
   printf("Enter Employee ID to delete: ");
   scanf("%d", &delete_id);
 
   while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
       if (emp.id == delete_id) {
           found = 1;
           continue; // Skip writing this record to temp file
       }
       fprintf(temp_file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
   }
 
   fclose(file);
   fclose(temp_file);
 
   if (found) {
       remove(FILENAME);
       rename("temp.txt", FILENAME);
       printf("Employee record deleted successfully!\n");
   } else {
       remove("temp.txt");
       printf("Employee with ID %d not found!\n", delete_id);
   }
}
 
int main() {
   int choice;
 
   printf("\t\t * Employee Database * \n\n");
 
   while (1) {
       printf("\nEmployee Database Menu:\n");
       printf("1. Add Employee Record\n");
       printf("2. Display Employee Records\n");
       printf("3. Edit Employee Record\n");
       printf("4. Delete Employee Record\n");
       printf("5. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
 
       switch (choice) {
           case 1:
               add_employee();
               break;
           case 2:
               display_employees();
               break;
           case 3:
               edit_employee();
               break;
           case 4:
               delete_employee();
               break;
           case 5:
               printf("Exiting the program.\n");
               return 0;
           default:
               printf("Invalid choice! Please try again.\n");
       }
   }
 
   return 0;
}
Output
 * Employee Database *
 
 
Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Delete Employee Record
5. Exit
Enter your choice: 1
Enter Employee ID: abc
Enter Employee Name: Enter Employee Salary: arhaan 20000
Employee record added successfully!
 
Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Delete Employee Record
5. Exit
Enter your choice: Enter Employee ID: Enter Employee Name: Enter Employee Salary: 1
Employee record added successfully!
 
Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Delete Employee Record
5. Exit
Enter your choice: 1
Enter Employee ID: abc
Enter Employee Name: Enter Employee Salary: rohit 34000
Employee record added successfully!
 
Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Delete Employee Record
5. Exit
Enter your choice: Enter Employee ID: Enter Employee Name: Enter Employee Salary: 2
Employee record added successfully!
 
Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Delete Employee Record
5. Exit
Enter your choice: 2
 
Employee Records:
ID      Name            Salary
---------------------------------
1       bc             0.00
0       rhaan 20000    1.00
1       bc             0.00
0       ohit 34000     2.00
 
Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Record
4. Delete Employee Record
5. Exit
Enter your choice: 5
Exiting the program.
 
Process returned 0 (0x0)   execution time : 50.734 s
Press any key to continue.