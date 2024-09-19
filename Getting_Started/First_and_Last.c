/* 
Exercise H(i) , to obtain sum of first and last digit
Author: gedam 
Created : 18-09-2024 
*/
#include<stdio.h>
main()
{

    int four_digit_num, temp, sum = 0, curr_digit;
    scanf("%d", &four_digit_num);
    sum = four_digit_num % 10 ;
    temp = four_digit_num;
    while( temp > 0 ){
        curr_digit = temp % 10;
        temp /= 10;
    }
    sum += curr_digit;
        
    printf("required Sum : %d\n", sum);
}


