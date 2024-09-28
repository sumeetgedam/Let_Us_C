/* 
Exercise E(j), to print pascals triangle
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j, number = 1;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5 - i; j++){
			printf(" ");
		}
		int coef = 1;
		for(j = 1; j <= i; j++){
			printf(" %d", coef);
			coef = coef * (i - j) / j;
		}
		printf("\n");

	}
}