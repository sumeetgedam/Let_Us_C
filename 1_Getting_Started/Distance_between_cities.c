/* 
To Convert distance taken from user into different units as part of Exercise H(b)
Author: gedam 
Created : 17-09-2024 
*/
#include<stdio.h>
main()
{
	float distance_in_km;
	scanf("%f", &distance_in_km);
	
	float distance_in_meters = 1000 * distance_in_km;
	float distance_in_feets = 3280.84 * distance_in_km;
	float distance_in_inches = 39370.1 * distance_in_km;
	float distance_in_centimeters = 100000 * distance_in_km;

	printf("distance_in_meters : %f\ndistance_in_feets: %f\ndistance_in_inches : %f\ndistance_in_centimeters : %f\n", distance_in_meters, distance_in_feets, distance_in_inches, distance_in_centimeters);

}