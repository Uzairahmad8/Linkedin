// Author = Uzair Ahmad ;

#include<stdio.h>

int main(){

    // Declaring varibale's ;
	int feet , inches , centi_meter ;

	printf("Enter Feet : ");
	scanf("%d",&feet);
	// 1 Feet = 12 inches ;
	// That's why we use feet * 12 formula below ;

	inches = feet * 12;

	printf("%d Feet is %d Inches. \n", feet , inches);

	// Now Feet to centi_meter.
	
	// 1 Feet = 30 centi_meter ;
	// That's why we use feet * 30 formula below ;
	
	centi_meter  = feet * 30;

	printf("%d Feet is %d Centi Meters", feet ,centi_meter);

	return 0;
}