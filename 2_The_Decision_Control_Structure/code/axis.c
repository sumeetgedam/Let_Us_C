/* 
Exercise C(l) , find out if it lies on the x-axis, y-axis or at the origin
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if(x == 0){
		if(y == 0){
			printf("Point is at the origin\n");
		}else{
			printf("Point is on X axis\n");
		}
	}else if(y == 0){
		printf("Point is on Y-axis");
	}else{
		printf("Point is not on origin, X, Y-axis\n");
	}

	
}