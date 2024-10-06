/* 
Exercise F(c), a function to return the the average and percentage of these marks.
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int a, b, c;
	float avg, percent;
	scanf("%d %d %d", &a , &b, &c);
	operations(a, b, c, &avg, &percent);
	printf("Average :  %f, Percentage:  %f", avg, percent);
}
operations(int p, int q, int r, float *v, float *w){
	int u = p + q + r ;
	*v = u / 3.0;
	*w = (u / 300.0) * 100; // assuming each subject have max marks as 100
}