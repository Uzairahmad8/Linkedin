// Author = Uzair Ahmad 

#include <stdio.h>

int main() {
    
  	int n;
    unsigned long long fact = 1; // variable to store factorial result
    
  	printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
    {
      printf("Error! Factorial of a negative number doesn't exist.");
    }
    
  	else 
    {
        // calculates factorial of a positive integer
        
      	for (int i = 1; i <= n; ++i) {
            fact *= i; // multiply the current factor with the previous ones          
        }
      
      	// display the factorial result
        printf("Factorial of %d = %llu", n, fact); 
    }

    return 0; // exit the program
} 