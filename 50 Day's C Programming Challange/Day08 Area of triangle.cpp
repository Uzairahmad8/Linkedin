// Author = Uzair Ahmad ;

#include<stdio.h>

int main(){

    // Declaration of variable's ;
 	int length , width , Area_of_triangle ;
	
	printf("Enter Length :");
	scanf("%d", &length);
	
	printf("Enter Side Two :");
	scanf("%d", &width);
	
	
	//Formula for Area of Rectangle is = Length * width ; 	
	Area_of_triangle = length * width;

	printf("Area of Rectangle is : %d", Area_of_triangle);

	return 0;
}