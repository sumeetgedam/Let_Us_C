/* 
Exercise H(g) to calculate sum of digits of a five digit number 
Author: gedam 
Created : 18-09-2024 
*/
#include<stdio.h>
main()
{
	int five_digit_num;
	scanf("%d", &five_digit_num);
	
	int sum_of_digits = 0;
	int temp = five_digit_num;
	while(temp > 0){
		sum_of_digits += temp %10;
		temp /= 10;
	}
	printf("sum of digits of number entered : %d\n", sum_of_digits);
}


 

