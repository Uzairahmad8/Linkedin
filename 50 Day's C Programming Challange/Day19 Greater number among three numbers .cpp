// Auhtor = Uzair Ahmad ;

#include<stdio.h>

int main(){

  	int 
    number_one = 5 ,
  	number_two = 8 ,
    number_three = 7;   

  	// Logic 
  	// " && " is called  " And operator "
    if ( number_one > number_two  && number_one > number_three)
    {  
        printf("A is Greatest.");
    }
  
    else if( number_two > number_one && number_two > number_three)     
    {
        printf("B is Greatest.");
    }
  
    else 
    { 
        printf("C is Greatest.");             
    }

    return 0;
}

