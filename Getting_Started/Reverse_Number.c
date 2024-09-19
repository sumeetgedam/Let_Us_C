/* 
Exercise H(h), reverse a five digit number
Author: gedam 
Created : 18-09-2024 
*/
#include<stdio.h>
main()
{
	int five_digit_num, temp, reversed_num = 0, pos = 10;
	scanf("%d", &five_digit_num);
	
	temp = five_digit_num;
	while(temp > 0){
		reversed_num = pos * reversed_num +  (temp % 10);
        temp /= 10;

	}
	printf("reversed number : %d\n", reversed_num);

}


