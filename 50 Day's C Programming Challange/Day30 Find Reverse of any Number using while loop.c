// Author = Uzair Ahmad 

#include <stdio.h>

int main(){
	
	int num , x = 0 , rev = 0 ;   
  	// declare variables to store the input number, 
  	// a variable to store the remainder, and a variable to store the reversed number
	
  	
	printf("Enter Number : ");
	scanf("%d", &num);           
	
  	// declare a variable for loop counter
	int i = 1 ;                 
	
  	// loop through each digit of the number until it becomes 0
	while ( num != 0)
    {           
		// get the remainder of the number when divided by 10 to get the last digit
		x = num % 10 ;    
      
	 	// add the last digit to the reversed number (multiply by 10 to shift previous digits left)	
		rev = rev * 10 + x;     
      
		// remove the last digit from the number to process the next digit
		num = num / 10 ;         
		
      // increment loop counter
		i++ ;                    
	}
	// print the reversed number
	printf("Reverse Number is %d", rev);           
	
	return 0;
}