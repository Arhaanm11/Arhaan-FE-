/*
Exp 8 Task 2
Title : WAP to check if the entered string is palindrome or not.
Name : Arhaan Mulla
DIV:C
UIN :241P049
ROLL NO. :46
*/

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    printf("%s is %s Palindrome.\n", string1, flag ? "Not a" : "a");

    return 0;
}

Output :
Enter a string: NAMAN
NAMAN is a Palindrome.

Process returned 0 (0x0)   execution time : 3.732 s
Press any key to continue.
