// Author: Uzair Ahmad 

#include <stdio.h>

int main() {

    // Declare a character array of size 20 to store user input;
    char a[20] ;
    
    printf("Enter Something : ");
    gets(a);
    
    // initialize variables to store the count of digit, alphabets and special characters; 
    int digit=0,alphabet=0,special=0;
    
    // initialize the counter variable to access each character in the string; 
    int i=0 ;
    
    // loop through each character in the string until the null character is encountered 
    while(a[i] != '\0')
    {
        // if the character is an alphabet (lowercase or upercase);
        if( ( a[i] >= 'a' && a[i] <= 'z') || ( a[i] >= 'A' && a[i] <= 'Z') )
            alphabet++ ; // increment in alphabet count
            
        // if the character is a digit;
        else if( a[i] >= '0' && a[i] < '9')
            digit++ ;   // increment in digit count
            
        // otherwise the character is a special character 
        else 
            special++ ; // increment in special count
        
        // if the character is a space ;
        if(a[i] == ' ')
        // decrement the special character count as spaces are not considered special character 
            special--;
            
    // move to the next character;
    i++ ;
    }
    
    printf("Digit : %d\n",digit); // print the digit; 
    printf("Alphabet : %d\n", alphabet); // print the alphabet;
    printf("Special Word: %d\n", special); // print the special character;
    return 0;
}