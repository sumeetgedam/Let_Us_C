/* 
Exercise F(a), a function to return product of a integer and float
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
main()
{
	float product(int, float);
	float b, ans;
	int a;
	scanf("%d %f", &a, &b);
	ans = product(a, b);
	printf("%f", ans);
}
float product(int x, float y){
	float z;
	z = x * y;
	return (z);
}