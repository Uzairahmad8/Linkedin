// Author = Uzair Ahmad

#include<stdio.h>
int main(){

    int num;

    printf("Enter Number : ");
    scanf("%d", &num);   

    if ( num >= 0){
        printf("%d is Positive Number.", num);       
    }
    else {
        printf("%d is Negative Number.", num);         
    }

    return 0;
}

   