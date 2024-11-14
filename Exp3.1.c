/* Exp No.: 3.1
UIN:241P049
Title:WAP to design a menu driven calculator using switch and goto.
*/

#include<stdio.h> int main () {
printf("+ for Addition\n"); printf("- for Subtraction\n "); printf("* for Multiplication\n"); printf("/ for Division\n"); printf("%% for Modulus\n");

float num1, num2, result; char op, choice; int answer; backagain:

printf("Enter num1:"); scanf("%f", &num1); printf("Enter num2:"); scanf("%f", &num2); printf("Enter Operation:"); scanf(" %c", &op);

switch (op) {
case '+':
result=num1+num2; printf("%.1f+%.1f=%.1f",num1,num2,result); break;

case '-':
result = num1-num2; printf("%.1f-%.1f=%.1f",num1,num2,result); break;

case '*':
result = num1*num2; printf("%.1f*%.1f=%.2f",num1,num2,result); break;

case'/':
if (num2!=0) {
result = num1/num2; printf("%.1f/%.1f=%.1f",num1,num2,result);
}
else {
printf ("Answer is not defined");
}
break;

case '%':
answer = (int)num1%(int)num2; printf("%.0f % %.0f=%.0f",num1,num2,answer); break;

default: printf("Invalid Operator. Try Again."); break;

printf ("Do you want to Continue? Y/N \n"); scanf ("%c",&choice); if (choice=='Y' || choice=='y') {
goto backagain;
}
}
return 0;
}

/*OUTPUT
+ for Addition
- for Subtraction
* for Multiplication
/ for Division
% for Modulus
Enter num1:10
Enter num2:20
Enter Operation:*
10.0*20.0=200.00

=== Code Execution Successful ===
*/
