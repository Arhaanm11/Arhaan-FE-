/*
Exp 8 Task 1
Title:WAP to find the length of a string without using library function.
Name:Arhaan Mulla
DIV : C
Roll no.: 46
UIN:241P049
*/
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: \n");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
        length++;

    printf("Length of input string: %d", length);
    return 0;
}
Output
Enter a string:
COMPETITION
Length of input string: 11
Process returned 0 (0x0)   execution time : 16.422 s
Press any key to continue.
