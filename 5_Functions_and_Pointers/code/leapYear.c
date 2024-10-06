/* 
Exercise D(d), a function to determine a leap year
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
main()
{
	int year;
	printf("Enter a Year to check for leap year : ");
	scanf("%d", &year);
	leapYear(year);
	
}
leapYear(int year){
	if((year%400 == 0) || (year%100 !=0 && year%4 == 0)){
		printf("Entered year is a leap year");
	}else{
		printf("Entered year is not a leap year");
	}
}