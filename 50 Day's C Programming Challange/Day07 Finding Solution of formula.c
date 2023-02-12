// Author = Uzair Ahmad ;

#include<stdio.h>

int main(){
		
		int a,b,c;
		
		printf("Enter a : ");
		scanf("%d",&a);
		
		printf("Enter b : ");
		scanf("%d",&b);
		
		printf("Enter c : ");
		scanf("%d",&c);
		
		// Logic ;
		int formula = (a*a) + (b*b) + (c*c) + 2*((a*b)+ (b*c) + (c*a));
		
		
		printf("Answer of (a+b+c)^2 : %d", formula);
		
		
	return 0;
}