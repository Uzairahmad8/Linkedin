// Author = Uzair Ahmad

#include<stdio.h>

int main(){
		
  		// Declaration of Variables ;
		int number1 , number2;		
		int basket ;
		
  		// Taking Inputs ;
		printf("Enter Number One : ");
		scanf("%d", &number1);
		
		printf("Enter Number Two : ");
		scanf("%d", &number2);
		
  		// Logic of Swaping Number's ;
		basket = number1;
		number1 = number2 ;
		number2 = basket ;
		
		// printing numbers after swaping 
  		printf("After swaping Number_One is : %d \n", number1);     
		printf("After Swaping Number_Two is : %d \n", number2);        
	
	return 0;
}