// Auhtor: Uzair Ahmad 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char a[20] ; // declare a character array of size 20
    
    printf("Type Something : "); // ask user to input something
    gets(a); // read input from user and store it in the array 'a'
    
    int i=0; // initialize a counter variable 'i' to 0
    
    // iterate through the array until the null character '\0' is reached
    while(a[i]!='\0') 
    {
        i++ ; // increment the counter 'i' by 1 for each character in the array
    }
    // print the length of the string (i.e. the value of 'i') 
    printf("Lenght of String : %d ", i); 
   
    
    return 0; 
} 