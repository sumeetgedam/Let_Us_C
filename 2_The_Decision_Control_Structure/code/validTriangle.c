/* 
Exercise C(g), check if angles given are par to valid triangle
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if((a + b + c) == 180){
		printf("The entered angles are angles of a valid triangle\n");
	}else{
		printf("entered angles are not part of a valid triangle\n");
	}
}