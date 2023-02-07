// Auhtor = Uzair Ahmad

#include <stdio.h>

int main() {
    
    // Declaration of Variables ;
    int number , Result ;

    // Taking input from user ;
    printf("Enter Number : ");
    scanf("%d", &number);
    
    /*
    "sqrt" is a function in C langauge with the help
    of which we can find square root of any number ;
    */
    
    Result = sqrt(number);
    
    printf("Square root of %d is %d", number, Result);
    return 0;
}