/* 
Exercise J(f), a function to evaluate the series 
Author: gedam 
Created : 07-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	double x, a_x, sinFromMath = 0.0, sinFromX = 0.0, temp;
	int i, n, sign = -1;
	printf("Enter x and n :");
	scanf("%lf %d", &x, &n);
	a_x = x;
	x = x * (3.141259/180);

	for(i = 1; i <= n; i+=2){
		sign = -1 * sign;
		temp = sign*(pow(x, i)/fact(i));
		sinFromX  += temp;
	}

	printf("sin(%.2lf) as per formula : %lf", a_x, sinFromX);
	sinFromMath = sin(x);
	printf("\nsin(%.2lf) from math.h : %lf", a_x, sinFromMath);

}

fact(int a){
	if(a <= 1){
		return 1;
	}
	return fact(a-1) + fact(a-2);
}