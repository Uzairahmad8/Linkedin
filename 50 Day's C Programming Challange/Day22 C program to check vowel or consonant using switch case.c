// Author = Uzair Ahmad ;

#include<stdio.h>

int main(){
	
    char input ;
    
    printf("Enter Character : ");
    scanf("%c", &input);

  	// if user enter alphabet then this if statement will be executed ;
    if( input >='a' && input <='z' || input >= 'A' && input <= 'Z' )           
      
    {
    	
    switch(input){
    	
        case 'a' :
        case 'A' :
        	
	case 'e' :
	case 'E' :
	    	
        case 'i' :
        case 'I' :
        	
        case 'o' :
        case 'O' :
        	
        case 'u' :
        case 'U' :
        	
        printf("%c is Vowel.",input);
        
        break;
        
        default :
        	
        printf("%c is Consonant", input);
    }
    
	} 
	
  	// when user enter character other alphabets ; 
	else
    {
    	printf("Valid Input.");  
    }
  
	

  return 0;
}

