// Author = Uzair Ahmad 

#include <stdio.h>

int main(){
	
	// Declaring a variable to store the number of rows entered by the user.  
	int row;
		

	printf("Enter Number of Row's : ");
	scanf("%d", &row);
	
	// Initializing the counter variable to 1.
	int i = 1;
	
	// Using a while loop to print the pattern.
	while( i <= row )
	{
		// Using a for loop to print the numbers in each row.
		for(int j = 1; j <= i ; j++)
		{
			printf("%d", j);	
		}
		
		// Printing a new line after each row.
		printf("\n");
		
		// Incrementing the counter variable.
		i++ ;
	}
	
	return 0;
} 


// OUTPUT:

// Enter Number of Row's : 5
// 1
// 12
// 123
// 1234
// 12345