/* 
Exercise J(a), a function to return the sum of digits without recurssion
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int num, ans;
	scanf("%d", &num);
	ans = sumOfDigits(num);
	printf("Sum of digits :  %d", ans);
}
sumOfDigits(int n){
	int x = 0;
	while(n > 0){
		x = x + n%10;
		n = n / 10;
	}
	return (x);
}