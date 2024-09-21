/* 
Excercise C(h), absolute value of entered number
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int number;
	scanf("%d", &number);
	if(number < 0){
		number = number * (-1);
	}
	printf("Absolute value of entere number is : %d\n", number);
}