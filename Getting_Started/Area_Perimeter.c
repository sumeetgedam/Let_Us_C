/* 
Exercise H(e) to calculate area and perimeter of circle and rectangle
Author: gedam 
Created : 18-09-2024 
*/
#include<stdio.h>
main()
{
	float length, breadth, radius, pie = 3.14;
	scanf("%f %f %f", &length, &breadth, &radius);
	float area_of_rectangle = length * breadth ;
	float perimeter_of_rectangle = 2 * ( length + breadth);
	float area_of_circle = pie * radius * radius;
	float perimeter_of_circle = 2 * pie * radius; 
	printf("area of area_of_rectangle : %f\nperimeter_of_rectangle : %f\narea_of_circle : %f\nperimeter_of_circle : %f\n",area_of_rectangle, perimeter_of_rectangle, area_of_circle, perimeter_of_circle );
}


 

