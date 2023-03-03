// Author = Uzair Ahmad 

#include <stdio.h>

int main(){

    // Declare two integer variables
    int num1, num2;

    // Prompt user to input the first number of the range
    printf("Enter 1st Number of Range : ");
    scanf("%d", &num1);

  // Prompt user to input the second number of the range
    printf("Enter 2nd Number of Range : ");
    scanf("%d", &num2);

    // Loop through the range [num1, num2) and print even numbers   
    for(int i = num1; i < num2; i++)
    {
        // Check if the current number is even
        if(i % 2 == 0)
        {
            // Print the even number
            printf("%d ", i);
        }
    }

    return 0;
}