// Author: Uzair Ahmad

#include <stdio.h>

int main() {
    int number, third_number;
    int a = 0, b = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop through the Fibonacci sequence and print each number
    for (int i = 1; i <= number; i++) {
        printf(" %d ", a);

        // Calculate the next number in the sequence
        third_number = a + b;
        a = b;
        b = third_number;
    }

    return 0;
}