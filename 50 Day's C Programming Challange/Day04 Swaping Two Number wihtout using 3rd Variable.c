// Auhtor = Uzair Ahmad 

#include <stdio.h>

int main() {
    
    // declarating Variable ;
    int number_one , number_two ;
    
    printf("Enter Two Numbers : ");
    scanf("%d %d", &number_one , &number_two);
    
    // Logic ;
    // Let number_one = 8 , number_two = 5 ;
    number_one = number_one + number_two ;// number_one = 8 + 5 = 13
    number_two = number_one - number_two ;// number_two = 13 - 5 = 8 ;
    number_one = number_one - number_two ;// number_one = 13 - 8 = 5 ;
    
    printf("Number_one = %d\n", number_one);
    printf("Number_two = %d\n", number_two);

    return 0;
}