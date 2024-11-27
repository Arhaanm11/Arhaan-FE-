/*
Exp 9 Task 1
Title :Design a struture student_record to contain name, roll_number,and total marks obtained. Write a program to read 5 students data from the user and then display the topper on the screen.
Name : Arhaan Mulla
DIV :C
Roll no. : 46
UIN :241P049
*/

#include <stdio.h>
struct student_record {
    char name[50];
    int roll_number;
    float marks;
} s[5];

int main() {
    int i,max,n;
    printf("Enter Data of the students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll_number = i + 1;
        printf("For roll number %d,\n", s[i].roll_number);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Total Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Topper :\n\n");

    max=s[0].marks;
       for(i=0;i<5;i++)
    {
     if(max<s[i].marks)
     {
       max=s[i].marks;
       n=i;
     }
    }


    // displaying topper on the screen
    for (i = 0; i <1;i++) {
        printf("\nRoll number: %d\n", i);
        printf("Name: ");
        puts(s[n].name);
        printf("Total Marks: %.1f", s[n].marks);
        printf("\n");
    }
    return 0;
}

Output
Enter Data of the students:
For roll number 1,
Enter Name: Arhaan
Enter Total Marks: 30
For roll number 2,
Enter Name: Smith
Enter Total Marks: 42
For roll number 3,
Enter Name: Dwayne
Enter Total Marks: 27
For roll number 4,
Enter Name: Sayali
Enter Total Marks: 12
For roll number 5,
Enter Name: Sharmin
Enter Total Marks: 23
Displaying Topper :


Roll number: 2
Name: Smith
Total Marks: 42.0

Process returned 0 (0x0)   execution time : 67.015 s
Press any key to continue.
