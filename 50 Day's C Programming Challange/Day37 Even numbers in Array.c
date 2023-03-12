// Author: Uzair Ahmad 
#include <stdio.h>

int main(){
  
	// Declare a variable to store the size of the array
	int size;

	// Ask the user to enter the size of the array
	printf("Enter Size for Array : ");

	// Read the size of the array entered by the user
	scanf(" %d", &size);

	// Declare an array of size "size"
	int number[size];

	// Get input from the user and store it in the array
	printf("Enter %d Number of Your Wish : \n", size);    
	for(int i = 0 ; i < size; i++)
	{   
	    printf("index no [%d] : ",i);
		scanf("%d" , &number[i]);
	}

	// Print the even numbers in the array
	printf("\nEven Numbers => ");
	for(int i = 0 ; i < size; i++)
	{
		if( number[i] % 2 == 0)
		{
			printf("%d ", number[i]);
		}
	}

	return 0 ;
  
}
