/* 
Exercise F(i), to determine if Studen tis failed , passed or should reappear
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	float A, B;
	scanf("%f %f", &A, &B);
	if(A >= 55 && B >= 45){
		printf("Passed\n");
	}else if(A >= 45 && B >= 55){
		printf("Passed\n");
	}else if(A >= 65 && B < 45){
		printf("Reappear in B to qualify\n");
	}else{
		printf("Failed\n");
	}
}