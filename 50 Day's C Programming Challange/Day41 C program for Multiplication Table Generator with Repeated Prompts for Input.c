// Author: Uzair Ahmad 

#include <stdio.h>

// function prototype for printTable
void printTable(int num);

int main() {
    
    int n;
    char again;
    
    // do-while loop to keep prompting user for input until they choose to exit
    do{
        printf("Enter a number: ");
        scanf("%d", &n);

        printf("Table of %d:\n", n);
        
        // call printTable function to print multiplication table for given number 
        printTable(n);
        
        // prompt user if they want to print another table
        printf("\nWant to print another Table : Y/N : ");
        scanf(" %c", &again);
        
    }while(again == 'Y' || again == 'y');
    
    return 0;
}

// function to print multiplication table for given number
void printTable(int num) {
    // for loop to print the multiplication table up to 10
    for (int i = 1; i <= 10; i++) 
    {
        // print the multiplication table row for current number 
        // and current iteration of loop
        
        printf("%d x %d = %d\n", num, i, num*i);
    }
}