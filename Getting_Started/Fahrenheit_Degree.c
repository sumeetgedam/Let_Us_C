/* 
To Convert Fshrenheit to centigrade degree as per Exercise H(d)
Author: gedam 
Created : 17-09-2024 
*/
#include<stdio.h>
main()
{
	float temperature_in_fh;
	scanf("%f", &temperature_in_fh);
	float temperature_in_deg = ((temperature_in_fh - 32) * 5)/9 ;
	printf("temperature in centigrade degree : %f\n",temperature_in_deg );
}