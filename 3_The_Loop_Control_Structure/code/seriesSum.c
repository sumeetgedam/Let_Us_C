/* 
Exercise E(c), to find the sum of series
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int i;
	float deno = 1.0, ans = 0;
	for(i = 1; i <= 7; i++){
		deno = deno * i;

		ans = ans + (i/deno);
	}
	printf("%f\n", ans);
}