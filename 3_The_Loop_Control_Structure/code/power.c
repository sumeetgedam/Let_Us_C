/* 
Exercise B(c), to calculate value of one number raised to the power of another
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int a, b, i = 1, ans = 1;
	printf("Enter two numbers space separated : ");
	scanf("%d %d", &a, &b);

	while(i <= b){
		ans = ans * a;
		i = i + 1;
	}
	printf("%d", ans);


}