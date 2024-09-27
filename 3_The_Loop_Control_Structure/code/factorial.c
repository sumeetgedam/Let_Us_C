/* 
Exercise B(b), to calculate the factorial of a number
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{
	int number, i = 1, ans = 1;
	scanf("%d", &number);
	while(i <= number){
		ans = ans * i;
		i = i + 1;
	}
	printf("Factorial value of %d is %d\n", number, ans);


}