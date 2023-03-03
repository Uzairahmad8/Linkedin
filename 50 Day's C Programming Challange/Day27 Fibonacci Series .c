// Auhtor = Uzair Ahmad 

#include <stdio.h>

int main() {
  
  int number ; // declare integar varibale to store the user input ;
  
  printf("Enter a Number : ");// prompt the user to enter a number
  scanf("%d", &number); // read the user input and store it in the " number " variable;
  
  // use a for loop to iterate from 1 to 10 
  for(int i = 1; i <= 10 ; i++)
  {
      printf("%d x %d = %d\n",number , i , number*i);
      // print out the current number , loop index and their product ;
  }
  
    return 0;
}