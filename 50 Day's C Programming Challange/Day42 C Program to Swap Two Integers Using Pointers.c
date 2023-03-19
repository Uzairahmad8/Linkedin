// Author: Uzair Ahmad

#include <stdio.h>

// function prototype for swapping two integers
void swap(int *firstNumberPtr, int *secondNumberPtr);

int main() {
    int firstNumber, secondNumber;
    
    // take input from user for two integers
    printf("Enter First Number: ");
    scanf("%d", &firstNumber);
    
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);
    
    // print the two integers before swapping
    printf("\nBefore Swapping: \nfirstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
    
    // call swap function to swap the values of two integers
    swap(&firstNumber, &secondNumber);
    
    // print the two integers after swapping
    printf("\nAfter Swapping: \nfirstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
    
    return 0;
}

// function definition for swapping two integers
// call by reference
void swap(int *firstNumberPtr, int *secondNumberPtr) {
    // declare a temporary variable to hold the value of first integer
    int temp = *firstNumberPtr;
    
    // assign the value of second integer to first integer
    *firstNumberPtr = *secondNumberPtr;
    
    // assign the value of temporary variable (which holds the original value of first integer) to second integer
    *secondNumberPtr = temp;
}