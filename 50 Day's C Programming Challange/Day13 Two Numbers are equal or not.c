// Author = Uzair Ahmad ;
#include<stdio.h>

int main(){

    int num_one , num_two ;

  	// Taking input from user ;
  
    printf("Enter Number one : \n");
    scanf("%d", &num_one);

    printf("Enter Number Two : \n");
    scanf("%d", &num_two);

  	// Condition ;
  	// " == " is used to compare two variable's ;    
  
    if ( num_one == num_two)
    {
        printf("Both Number's are Equal .");      
    }
    else 
    {
        printf("Number's are Not Equal.");
    }

    return 0;
}

