// Author = Uzair Ahmad ;

#include <stdio.h>

int main() {
   
    int number1 = 8, number2 = 5;
   
    if (number1 >= number2) 
    {
      // Another if inside an if ( NESTED IF ) ;
      if (number1 == number2) 
      {
        printf("Result: %d = %d",number1,number2);
      }
      else 
      {
        printf("Result: %d > %d", number1, number2);
      }
    }
    
    else 
    {
        printf("Result: %d < %d",number1, number2);             
    }

    return 0;
}
