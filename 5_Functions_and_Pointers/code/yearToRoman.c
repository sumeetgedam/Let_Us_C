/* 
Exercise D(c), a function to convert any given year into its roman equivalent
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
main()
{
	int year;
	printf("Enter a Year to convert to roman : ");
	scanf("%d", &year);
	intergerToRoman(year);
	
}
intergerToRoman(int year){
	while(year >= 1000){
		printf("m");
		year -= 1000;
	}
	while(year >= 500){
		printf("d");
		year -= 500;
	}
	while(year >= 100){
		printf("c");
		year -= 100;
	}
	while(year >= 50){
		printf("l");
		year -= 50;
	}
	while(year >= 10){
		printf("x");
		year -= 10;
	}
	while(year >= 5){
		printf("v");
		year -= 5;
	}
	while(year >= 1){
		printf("i");
		year -= 1;
	}
	return;
}