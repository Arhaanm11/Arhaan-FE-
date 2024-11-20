/*Name      :Arhaan
  UIN       :241P049
  Roll no   :46
  Topic     :WAP to define a counter function to print how
             many times the function is called use storage classes.
/*


#include <stdio.h>

void counter() {
    static int c = 1;
    printf("Called %d times\n", c);
    c++;
}

int main() {
    int n;
    printf("Enter how many times to call the function: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        counter();
    }

    return 0;
}



Output

Enter how many times to call the function: 7
Called 1 times
Called 2 times
Called 3 times
Called 4 times
Called 5 times
Called 6 times
Called 7 times

Process returned 0 (0x0)   execution time : 2.326 s
Press any key to continue.



