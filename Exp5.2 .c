/*Expt. No.:5.2
UIN:241P049
Title:WAP to find the factorial of a number using recursive function.
*/

#include <stdio.h>

int calcRecursiveFact (int x) {
if (x==0||x==1) {
return 1;
}
return x*calcRecursiveFact(x-1);
}

int calcProduct (int x) {
if (x==1) {
return 1;
}
return x*calcProduct(x-1);
}

int main() {
int num=5, product=1; product=calcProduct(num); printf("%d",product);

return 0;
}

/*OUTPUT
120
=== Code Execution Successful ===
*/
