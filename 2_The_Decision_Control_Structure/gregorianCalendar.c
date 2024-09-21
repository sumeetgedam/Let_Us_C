/* 
Excersize C(d), find out what is the day on 1st January of this year
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int year, baseYear = 1900;
	scanf("%d", &year);
	year = (year - 1) - baseYear; // -1 , going back 1 year as we are finding ans for 1st jan so no need to take that last year, we will add 1 day later
	int leapYear = year / 4;
	int remainingYear = year - leapYear;
	
	int days = (remainingYear *365) + (leapYear*366) + 1;// +1 as we talking of forst day of entered year
	int day = (days%7);

	if(day == 0){
		printf("day is Monday\n");
	}else if(day == 1){
		printf("day is Tuesday\n");
	}else if(day == 2){
		printf("day is Wednesday\n");
	}else if(day == 3){
		printf("day is Thurday\n");
	}else if(day == 4){
		printf("day is Friday\n");
	}else if(day == 5){
		printf("day is Saturday\n");
	}else if(day == 6){
		printf("day is Sunday\n");
	}else{
		printf("something went\n");
	}
}