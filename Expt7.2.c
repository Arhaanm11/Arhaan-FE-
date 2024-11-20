/*Name      :Arhaan Mulla
  UIN       :241P049
  Roll no   :46
  Topic     :WAP to calculate sum of two matrix
  */



#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];

    printf("Enter values for the first array:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter values for the second array:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("First array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Second array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    printf("Sum of the arrays:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
Enter values for the first array:
3 4 4 2
Enter values for the second array:
2 3
23
3
First array:
3 4
4 2
Second array:
2 3
23 3
Sum of the arrays:
5 7
27 5

Process returned 0 (0x0)   execution time : 14.393 s
Press any key to continue.
