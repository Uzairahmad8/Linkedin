// Author: Uzair Ahmad 

#include <stdio.h>

int main(){
	
	int n ; // Declare variable to store the number of rows
	
	// Prompt user to input the number of rows
	printf("Enter Number of Row's : ");
	
	// Read input from user and store it in variable n
	scanf("%d", &n);
	
	// Outer loop to iterate through each row
	for (int i = 1  ; i <= n ; i++) 
	{
		// Inner loop to print the spaces before the asterisks
		// Number of spaces = n - i
		for( int j = n ; j > i ; j--)     
		{
			printf(" "); // Print a space
		}
		
		// Inner loop to print the asterisks for the current row
		// Number of asterisks = (i * 2) - 1
		for(int k = 1 ; k <= i * 2 - 1 ; k++) 
		{
			printf("*"); // Print an asterisk
		}
		
		// Move to the next line to print the next row
		printf("\n");
		
	}
	
	return 0 ;
}


// Output:

// Enter Number of Row's : 5
//     *
//    ***
//   *****
//  *******
// *********