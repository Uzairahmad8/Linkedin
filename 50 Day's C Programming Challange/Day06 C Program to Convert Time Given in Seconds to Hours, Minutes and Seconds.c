// Author = Uzair Ahmad ;

#include <stdio.h>

int main() {
   
   int Givenseconds ;
   int Hours, Minutes, Seconds ;
   
   // Takng input from User ;
   printf("Enter Second's : ");
   scanf("%d", &Givenseconds);
   
   // Logic ;
   
   Hours = Givenseconds / 3600 ; // There are 3600 seconds in one Hour ;
   Minutes = (Givenseconds % 3600 ) / 60 ; // There are 60 seconds in One Minute 
   Seconds = (Givenseconds % 3600 ) % 60 ; // Remaingin Seconds after calculating Hours and Minutes ;
   
   printf("%d Hours %d Minutes %d Seconds.", Hours, Minutes, Seconds);

    return 0;
}