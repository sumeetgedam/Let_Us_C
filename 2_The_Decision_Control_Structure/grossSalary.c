/* 
Calculation of gross salary
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	float bs, gs, da, hra;
	printf("Enter basic salary : ");
	scanf("%f", &bs);

	if(bs < 1500){
		hra = bs * 10 / 100;
		da = bs * 90 / 100;
	}else{
		hra = 500;
		da = bs * 98 / 100;
	}

	gs = bs + hra + da;
	printf("gross salary : %f", gs);

}