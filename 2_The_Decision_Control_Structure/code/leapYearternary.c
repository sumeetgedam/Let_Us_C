/* 
Exercise I(b), to tell is entered year is a leapyear using terneary operator
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{
	int year;
	scanf("%d", &year);
	(year%400 == 0)? printf("Leap Year\n"): (((year%4 == 0) && (year%100 != 0))? printf("Leap Year") : printf("Not a Leap Year\n"));
}