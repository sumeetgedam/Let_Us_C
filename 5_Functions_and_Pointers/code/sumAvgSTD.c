/* 
Exercise F(b), a function to return the sum, average and standard deviation of these numbers
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int a, b, c, d, e, sum;
	float avg, std;
	scanf("%d %d %d %d %d", &a , &b, &c, &d, &e);
	operations(a, b, c, d , e, &sum, &avg, &std);
	printf("Sum : %d, Average :  %f, Standar Deviation:  %f", sum, avg, std);
}
operations(int p, int q, int r, int s, int t, int *u, float *v, float *w){
	*u = p + q + r + s + t;
	*v = *u / 3;
	*w = sqrt((((p - *v) * (p - *v) )+ ((q - *v) * (q - *v)) + ((r - *v) * (r - *v)) + ((s - *v) * (s - *v)) + (t - *v))/5);
}