// Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>

// Function prototype for checking whether the string is a palindrome
void CheckPalindrome(char arr[]); 

int main(){
	
	char arr[20] ; // Declare an array of size 20 to store the input string
  
	printf("Enter Value for String "); 
  
	gets(arr) ; // Prompt the user to input a string and store it in the array
  
	// Call the CheckPalindrome() function to check if the string is a palindrome
	CheckPalindrome(arr); 
	
	return 0 ; 
}

// Function to check whether the input string is a palindrome
void CheckPalindrome(char arr[])
{ 
	// Initialize a counter to keep track of the number of non-matching characters
	int check = 0 ; 
	int length = strlen(arr); // Get the length of the input string
	
  // Iterate through the first half of the string
	for(int i = 0 ; i < length/2 ; i++) 
	{
    	// If the character at the i-th position does not match 
        // the corresponding character at the end of the string, increment the counter
		if( arr[i] != arr[length - 1 - i ] ) 
			check++ ;
	}
		
	if(check) 
      // If the counter is non-zero, the string is not a palindrome
		printf("\nGiven String is not a palindrome.");
	else 
      // Otherwise, the string is a palindrome
		printf("\nGiven String is a palindrome.");
} 