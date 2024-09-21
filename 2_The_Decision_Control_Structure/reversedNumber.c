/* 
Excercise C(e), obtain reverse number and determine if they are same or not
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int number;
	scanf("%d", &number);
	int temp = number, reversedNumber = 0;
	while(temp > 0){
		reversedNumber = reversedNumber * 10 + (temp%10);
		temp /= 10;
	}
	if(number == reversedNumber){
		printf("Reversed Number and Entered number are same\n");
	}else{
		printf("Reversed Number and Entered number are not same");
	}
}