/* 
Calculation of simple interest , taking Inputs frmo users
Author: gedam 
Created : 17-09-2024 
*/
#include<stdio.h>
main()
{
	int p, n;
	float r, si;

	printf("Enter values of p, n, r\n");
	scanf("%d %d %f", &p, &n, &r);

	/* formula for simple interest */
	si = p * n * r / 100;

	printf("%f\n", si);
}