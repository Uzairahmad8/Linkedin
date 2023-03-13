// Author: Uzair Ahmad

#include <stdio.h>
#include <stdbool.h>

int main() {
	
  // initialize first array with integers 1 to 5
  int arr1[5] = {1, 2, 3, 4, 5}; 
  // initialize second array with integers 1 to 4 and 6     
  int arr2[5] = {1, 2, 3, 4, 6}; 
  
  // assume arrays are equal until proven otherwise
  int areEqual = true; 

  // compare each element of the two arrays
  for (int i = 0; i < 5; i++) {
    if (arr1[i] != arr2[i]) 
    {
      // mark as false if any elements differ
      areEqual = false;   
      break;
    }
  }

  if (areEqual == true)
  {
    // if arrays are equal, print message
    printf("The arrays are equal\n"); 
  } else
  {
    // if arrays are not equal, print message
    printf("The arrays are not equal\n"); 
  }

  return 0; 
}