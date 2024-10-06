/* 
Exercise D(a), a function to calculate factorial value of any integer
Author: gedam 
Created : 05-10-2024 
*/
#include<stdio.h>
main()
{
	int input, fact;
	scanf("%d", &input);
	fact = factorial(input);
	printf("%d\n", fact);
	
}
int factorial(int num){
	int f = 1, i;
	for( i = 1; i <= num; i++){
		f = f * i;
	}
	return (f);
}