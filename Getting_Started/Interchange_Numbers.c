/* 
Exercise H(f) to interchange two numbers inputed by user 
Author: gedam 
Created : 18-09-2024 
*/
#include<stdio.h>
main()
{
	int c, d;
	scanf("%d %d", &c, &d);
	printf("User entered : c = %d, d = %d\n", c, d);
	int temp = c;
	c = d;
	d = temp;

	printf("interchanged : c = %d, d = %d", c, d);
}


 

