/* 
Calculation of bonus
Author: gedam 
Created : 20-09-2024 
*/
#include<stdio.h>
main()
{
	int bonus, cy, yoj, yr_of_ser;
	printf("Enter current year and year of joining ");
	scanf("%d %d", &cy, &yoj);

	yr_of_ser = cy - yoj;
	if(yr_of_ser > 3){ 
		/*
		two statements to be executed,
		If a pair of braces is not used then 
		the C compiler assumes that 
		the programmer wants only 
		the immediately next statement 
		after the if to be executed
		*/
		bonus = 2500;
		printf("Bonus : %d", bonus);
	}

}
