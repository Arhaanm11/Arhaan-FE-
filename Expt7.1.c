    /*Name      :Arhaan Mulla
  UIN       :241P049
  Roll no   :46
  Topic     :WAP to find the largest element in an array.
  */

	#include <stdio.h>

int main() {
    int num[10], size, greatest = 0;

    printf("Array size (max 10): ");
    scanf("%d", &size);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &num[i]);

    for (int i = 0; i < size; i++) 
        if (num[i] > greatest) greatest = num[i];

    printf("Greatest: %d", greatest);

    return 0;
}


Output
Array size (max 10): 3
Array elements: 4 5 6 2 1 6
Greatest: 6
Process returned 0 (0x0)   execution time : 11.031 s
Press any key to continue.
