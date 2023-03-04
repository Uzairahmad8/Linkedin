// Author = Uzair Ahmad 

#include <stdio.h>

int main(){
	
	// declare variables
	int num, count=0;
	
	// ask user to enter a number
	printf("Enter Number : ");
	// get input from user and store in 'num'
	scanf("%d", &num);
	
	// loop from 2 to num/2 and check if num is divisible by any number in this range 
  	// loop will be iterate till half of the given number ( num/2 ) because any number is perfectly 		divided by its half and less then its half;
	for(int i=2; i<num/2; i++)
	{
		// if num is divisible by i, increase count by 1
		if(num % i == 0)
		{
			count++ ;
		}
	}
	
	// if count is 0, its mean that given number is not divisble by any 3rd number other then one and 		  itself  
  	//  so in result the number is prime
	if(count == 0)
	{
		printf("Prime Number.");
	}
	// if count is not 0,its mean that given number is divisble by 3rd number other then one and itself 
  	// so in result the number is not prime.
	else 
	{
		printf("Not Prime Number.");
	}
	
	return 0;
}