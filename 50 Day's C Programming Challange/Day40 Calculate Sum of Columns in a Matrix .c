// Author: Uzair Ahmad 

#include <stdio.h>

int main() {

    int a[3][3] ; // Declare a 2D array to hold matrix values
    int colomn[3]; // Declare an array to hold the sum of each column
    int sum = 0;
    
    printf("Enter Values: \n");
    // Take input from user for matrix elements
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0 ;  j < 3 ; j++)
        {
            printf("Index no [%d][%d] = ", i,j);
            scanf("%d", &a[i][j]); 
        }
    }
    //Loop through each column of the matrix and calculate its sum
    for(int i = 0 ; i < 3 ; i++)
    {
        sum = 0 ; // Reset sum for each column
        
        // Loop through each row of the column and add up its values
        for(int j = 0 ; j < 3 ; j++)
        {
            sum = sum + a[j][i] ; // Add the value of the element at row j and column i to the sum
        }
        colomn[i] = sum ; // Store the sum of the column in the array
    }
    
    // Print out the sum of each column
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\nSum of %d Colomn = %d ", i+1 , colomn[i]); // Display the sum of each column
    }
    
    return 0;
}