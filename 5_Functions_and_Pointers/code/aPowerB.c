/* 
Exercise D(b), a function to calculate a raised to b
Author: gedam 
Created : 05-10-2024 
*/
#include<stdio.h>
main()
{
	int a, b, ans;
	printf("Enter a and b (a raised to b) : ");
	scanf("%d %d", &a, &b);
	ans = apowerB(a , b);
	printf("%d\n", ans);
	
}
int apowerB(int a, int b){
	int f = 1, i;
	for( i = 1; i <= b; i++){
		f = f * a;
	}
	return (f);
}