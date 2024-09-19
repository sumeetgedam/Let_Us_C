/* 
Exercise H(m), print a new number by adding one to each of its digits 
Author: gedam 
Created : 19-09-2024 
*/
#include<stdio.h>
main()
{
	int five_digit_num;
	printf("Enter a five digit num : ");
	scanf("%d", &five_digit_num);
	int temp = five_digit_num, output = (temp % 10) + 1, pos = 10;
    temp /= 10;
	while(temp > 0){
		output += (pos * ((((temp % 10) == 9)?-1:temp%10) + 1));
		temp /= 10;
        pos *= 10;
	}
	printf("Output : %d", output);
}
