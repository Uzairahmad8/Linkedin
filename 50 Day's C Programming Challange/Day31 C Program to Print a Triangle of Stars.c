// Author: Uzair Ahmad

#include <stdio.h>

int main() {
    int rows; // declare a variable to hold the number of rows
    
    printf("How many rows: ");
    scanf("%d", &rows);
    
    // loop through each row
    for (int i = 1; i <= rows; i++) {
        // loop through each column in the current row
        for (int j = 1; j <= i; j++) 
        {
          // print a * for each column in the current row
            printf("*"); 
        }
      // move to the next line after printing all columns in the current row
        printf("\n"); 
    }
    
    return 0; 
}