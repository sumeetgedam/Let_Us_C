/* 
Exercise E(l), to find amount as per 10 set of p, r, n, q
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	float i, p, r, n, q;
	for(i = 1; i <= 10; i++){
        printf("Enter value of p r n q (space separated ) : ");
		scanf("%f %f %f %f", &p, &r, &n, &q);
		float a = p * (pow((1 + (r/q)), n*q));
		printf("compounded amount : %.2f\n", a);
	}
}