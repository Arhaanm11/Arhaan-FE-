Expt. No.:4
UIN:241P049
Title:WAP to find all the prime numbers between two numbers using functions.
*/

char checkPrime (int x) {
for (int i= 2; i < x; i++) {
if (x % i == 0) { return 'F';
}
} return 'T';
}

#include <stdio.h> int main() { int result,num1,num2,temp; restart:
printf("Enter two Numbers:"); scanf("%d %d", &num1,&num2);

if (num1 > num2) {
printf("Invalid Input\n"); goto restart;
}

if (num1 < 2) {
num1=2;
}

for (int i=num1; i<=num2; i++) {
if (checkPrime(i)=='T') {
printf("%d \t", i);
}
}
return 0;
}

/*OUTPUT
Enter two Numbers:20 1
Invalid Input
Enter two Numbers:1 20
2​3​5​7​11​13​17​19

=== Code Execution Successful ===
*/
