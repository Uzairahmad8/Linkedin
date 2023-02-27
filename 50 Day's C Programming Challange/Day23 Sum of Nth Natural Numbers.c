// Author = Uzair Ahmad 

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    
    // Read in the user's input
    scanf("%d", &n);
    
    // Calculate sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i; // Add the current number i to the running sum
    }
    
    // Print out the result
    printf("The sum of the first %d natural numbers is %d.\n", n, sum);  
    
    return 0;
}