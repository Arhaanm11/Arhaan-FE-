#include <stdio.h> 
 
Int main() { 
    Int start, end, sum = 0; 
 
    // Input the two numbers 
    Printf(“Enter the start number: “); 
    Scanf(“%d”, &start); 
     
    Printf(“Enter the end number: “); 
    Scanf(“%d”, &end); 
 
    // Ensure that the start number is odd; if not, move to the next odd number 
    If (start % 2 == 0) { 
        Start++; 
    } 
 
    // Loop through and sum all odd numbers between start and end 
    For (int I = start; I <= end; I += 2) { 
        Sum += I; 
    } 
 
    // Output the result 
    Printf(“The sum of all odd numbers between %d and %d is: %d\n”, start, end, sum); 
 
    Return 0; 
}
