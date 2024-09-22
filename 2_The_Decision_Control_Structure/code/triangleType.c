/* 
Exercise F(g), to determine type of triangle frmo sides entered
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	float a , b, c;
	printf("Enter 3 sides of a triangle : " );
	scanf("%f %f %f", &a, &b, &c);

	if(a == b && b == c && a == c){
		printf("Equilateral triangle\n");
	}else if((a == b && b == c) || (a == c && b == c) || ( a == b && a == c)){
		if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
			printf("Right angled Isosceles triangle\n");
		}
		else
			printf("Isosceles triangle\n");
	}else if(a != b && b != c){
		if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
			printf("Right angled Scalene triangle\n");
		}
		else
			printf("Scalene triangle\n");
	}
}