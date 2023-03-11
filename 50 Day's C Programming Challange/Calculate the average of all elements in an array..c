// Author: Uzair Ahmad 

#include <stdio.h>

int main() {
    int n;
    float sum = 0, avg;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Initialize an array of size n and take input from the user 
    int arr[n];
    printf("\nEnter the elements of the array: \n");
    
    for(int i = 0; i < n; i++) 
    {
        printf("Index no [%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add the current element to the sum
    }
    
    // Calculate the average of all the elements in the array
    avg = sum / n;
    
    // Display the average with 2 decimal places
    printf("Average of the array elements is: %.2f", avg);
    
    return 0;
}