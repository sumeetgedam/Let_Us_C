/* 
Exercise C(i), determine is area of rectangle is less than perimeter
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	float length, breadth;
	scanf("%f %f", &length, &breadth);
	int area = length * breadth;
    int perimeter = 2 * (length + breadth);
	if(area > perimeter){
		printf("Area of given rectangle is greater than perimeter\n");
	}else{
		printf("Area of given rectangle is less than perimeter\n");
	}
}