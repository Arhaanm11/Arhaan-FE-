/*
Exp 10 Task 1
Title :WAP to add two numbers using pointers.
Name : Arhaan Mulla
DIV :C
Roll no. : 46
UIN :241P049
*/

#include <stdio.h>
int main() {
    int a, b, *p, *q, sum;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("Sum = %d\n", sum);
    return 0;
}

Output
Enter two integers:
18
11
Sum = 29

Process returned 0 (0x0)   execution time : 10.551 s
Press any key to continue.
