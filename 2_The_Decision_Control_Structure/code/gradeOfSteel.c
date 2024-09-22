/* 
Exercise F(d), to determine Grade f Steel
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	int hardness, tensile;
    float carbon;
    printf("Enter following properties of Steel hardness, carbon content , tensile strength : ");
	scanf("%d %f %d", &hardness, &carbon, &tensile);

	if(hardness > 50 && carbon < 0.7 && tensile > 5600){
		printf("Grade of Steel is 10\n");
	}else if(hardness > 50 && carbon < 0.7){
		printf("Grade of Steel is 9\n");
	}else if(carbon < 0.7 && tensile > 5600){
		printf("Grade of Steel is 8\n");
	}else if(hardness > 50 && tensile > 5600){
		printf("Grade of Steel is 7\n");
	}else if(hardness > 50 || carbon < 0.7 || tensile > 5600){
		printf("Grade of Steel is 6\n");
	}else{
		printf("Grade of Steel is 5\n");
	}



}