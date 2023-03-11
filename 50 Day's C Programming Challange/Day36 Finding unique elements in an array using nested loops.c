// Author: Uzair Ahmad 

#include <stdio.h>

int main() {
    int arr[5], count = 0; 
  // Declare an array of 10 integers and a variable 
  //count to keep track of the number of unique elements

    printf("Enter 5 numbers:\n"); 
    for(int i=0; i<5; i++) 
    {
        printf("index No [%d] :",i);
        scanf("%d", &arr[i]); // Read the input numbers into the array
    }

    printf("The unique numbers are: ");
    // Iterate over the array to check for unique elements
    for(int i=0; i<5; i++) 
    { 
        // Assume the current element is unique until proven otherwise
        int unique = 1; 
        // Iterate over the remaining elements in the array
        for(int j=i+1; j<5; j++) 
        { 
            if(arr[i] == arr[j])
            { // If a match is found
                unique = 0; // Mark the current element as not unique
                break; // No need to check further
            }
        }
        if(unique==0)
        { // If the current element is unique
            count++; // Increment the count of unique elements
            printf("%d ", arr[i]); // Print the element
        }
    }

  	// Print the total count of unique elements
    printf("\nNumber of unique elements: %d\n", count); 

    return 0;
}

// Output:

// Enter 5 numbers:
// index No [0] :1
// index No [1] :2
// index No [2] :1
// index No [3] :2
// index No [4] :3
// The unique numbers are: 1 2 
// Number of unique elements: 2