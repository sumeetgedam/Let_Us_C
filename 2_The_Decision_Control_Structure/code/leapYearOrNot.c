/* 
Exercise C(c), to determine entered year is a leap year or not
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int year;
	scanf("%d", &year);
	if(year%400 == 0){
		printf("Entered year is a LEAP YEAR\n");
	}else if(year%100 == 0){
		printf("Entered year is not a LEAP YEAR\n");
	}else if(year%4 == 0){
		printf("Entered year is a LEAP YEAR\n");
	}else{
		printf("Entered year is not a LEAP YEAR\n");
	}
}