/* 
Exercise E(m), to convert given code into conditional operators
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int i;
    float x, ans= 0;
	scanf("%f", &x);
	float term = (x- 1)/x;
	ans = term;
	for(i = 2; i <= 7; i++){
		ans += ((1/2) * pow(term, i));
	}
	printf("Ans : %.2f\n", ans);
}