#include <stdio.h>

int main(){
    
    int arr[3][3] ;  // Declare a 2D integer array with 3 rows and 3 columns
    
    printf("Enter Values for Array \n");
    
    // Nested for loop to take input for each element of the array
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
        	// Prompt user to input value for the current element
            printf("Index no [%d][%d] = ",i,j);
			// Store the input value at the current element  
            scanf("%d", &arr[i][j]);  
        }
    }
    
    // Initialize minimum value to the first element of the array
    int min = arr[0][0] ;  
    
    // Nested for loop to traverse through each element of the array and find the minimum value
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
        	// If the current element is smaller than the current minimum value
            if (min > arr[i][j]) 
			{
                min = arr[i][j] ;  // Update the minimum value to the current element
			} 
        }
    }
     // Print the minimum value of the array
    printf("Minimum Number in the above Array = %d", min); 
    
    return 0;
}






