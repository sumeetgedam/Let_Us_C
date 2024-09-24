/* 
Exercise I(c), to use ternary operator to find greates of three integers
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	(a > b && a > c) ? printf("a is greatest\n") : ((b > c && b > a) ? printf("b is greatest"): printf("c is greatest"));
}