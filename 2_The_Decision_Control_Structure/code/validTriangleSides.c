/* 
Exercise F(f), to determine entered sides are sides of a valid triangle
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	float a , b, c;
	printf("Enter 3 sides of a triangle : " );
	scanf("%f %f %f", &a, &b, &c);
	if(a > b && b > c){
		if(a < b + c){
			printf("Valid Triangle\n");
		}else{
			printf("Invalid Triangle\n");
		}
	}else if(b > a && b > c){
		if(b < a + c){
			printf("Valid Triangle\n");
		}else{
			printf("Invalid Triangle\n");
		}
	}else{
		if(c < a + b){
			printf("Valid Triangle\n");
		}else{
			printf("Invalid Triangle\n");
		}
	}

}