// Author = Uzair Ahmad ;

#include <stdio.h>

int main() {
   
    int cor1 = 5 , cor2 = 8 ;
    
  	// Logic for checking Quadent Number ;
    if ( cor1 > 0 && cor2 > 0){
        printf("Cordinate's Lies In 1st Quadent.");               
    }
    else if ( cor1 < 0 && cor2 > 0){
        printf("Cordinate's Lies In 2nd Quadent.");
    }
    else if (cor1 < 0 && cor2 < 0){
        printf("Cordinate's Lies In 3rd Quadent.");
    }
    else if (cor1 > 0 && cor2 < 0){
        printf("Cordinate's Lies in 4th Quadent.");
    }
    else {
        printf("Cordinate's Lies on Origin.");
    }
  
    return 0;
}

