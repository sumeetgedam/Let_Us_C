/* 
Exercise E(h), to print multiplication table of number entered
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j, number;
	printf("Enter a number for multiplication table : ");
	scanf("%d", &number);
	for(i = 1; i < 11; i++){
		printf("%d * %d = %d\n", number, i, number * i);
	}
}