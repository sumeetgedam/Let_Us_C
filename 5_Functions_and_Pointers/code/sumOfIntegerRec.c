/* 
Exercise J(b), a function to return the sum of digits with recurssion
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
	if(n <= 0){
		return 0;
	}
	return ((n%10)+sumOfDigits(n/10));
}