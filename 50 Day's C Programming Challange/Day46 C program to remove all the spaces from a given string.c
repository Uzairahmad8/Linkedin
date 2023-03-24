#include <stdio.h>
#include <string.h>

int main() {
// Declare two character arrays to store the input string and the new string without spaces
    char string[100], new_string[100]; 
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); // Read input string from user

    // Remove spaces from string
    int j = 0 ;
    // Loop through each character in the input string
    for(int i = 0; string[i]; i++) 
    { 
     // If the current character is not a space
        if(string[i] != ' ') 
        {
        // Add the current character to the new string
            new_string[j] = string[i]; 
             // Increment the index for the new string
            j++;
        }
    }
    new_string[j] = '\0'; // Add null character to the end of the new string

    printf("Original string: %s", string); // Print the original string
    printf("New string: %s", new_string); // Print the new string without spaces

    return 0;
}