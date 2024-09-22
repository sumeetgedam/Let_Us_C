/* 
Exercise F(e), to determine Fine from Library for returning book late
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	int numOfDays;
	scanf("%d", &numOfDays);
	if(numOfDays >= 0 && numOfDays <=5){
		printf("Member is late by 1-5 days , fine is 50 paise\n");
	}else if(numOfDays > 5 && numOfDays <= 10){
		printf("Member is late by 6-10 days , fine is 1 rupee\n");
	}else if(numOfDays > 10 && numOfDays <= 30){
		printf("Member is late by 11-30 days , fine is 5 rupee\n");
	}else{
		printf("Member is late by > 30 days , membership will be cancelled\n");
	}



}