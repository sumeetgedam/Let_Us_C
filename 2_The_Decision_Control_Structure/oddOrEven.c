/* 
Exercise C(b), determine entered number is odd or even
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int number;
	scanf("%d", &number);
	if(number%2 == 0){
		printf("Number entered is EVEN\n");
	}else{
		printf("Number entered is ODD");
	}
}