/*Expt. No.:5.1
UIN:241P049
Title:WAP to find the factorial of a number using iterative function.
*/

#include <stdio.h>

int calcIterativeFact (int x) {
int product=1; for (int i=x; i>1; i--) {
product=product*i;
}
return product;
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
