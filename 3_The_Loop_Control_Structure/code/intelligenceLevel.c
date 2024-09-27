/* 
Exercise E(e), to calculate the intelligence level
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int y;
	float i, x;
	printf("i\t y \tx\n");
	for(y = 1; y <= 6; y++){
		for(x = 5.5; x <= 12.5; x += 0.5){
			printf("%f %d %f\n", (2 + (y + 0.5 * x)), y, x);
		}
	}
}