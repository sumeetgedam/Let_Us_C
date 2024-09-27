/* 
Exercise I(a), to calculate the octal equivalent of the entered number
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{

	int number, ans = 0, p = 1;
	scanf("%d", &number);
	int temp = number;
	while(temp > 0){
        ans = ans + (p * (temp %8));
		temp = temp / 8;
        p = p * 10;
	}
    printf("%d", ans);

}