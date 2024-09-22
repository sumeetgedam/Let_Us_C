/* 
Exercise F(h), to determine efficiency of worker
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	float timeTaken;
	scanf("%f", &timeTaken);
	if(timeTaken <= 3){
		printf("Highly efficient\n");
	}else if(timeTaken > 3 && timeTaken <= 4){
		printf("Need to improve\n");
	}else if(timeTaken >= 4 && timeTaken <= 5){
		printf("Need Training to improve Speed\n");
	}else {
		printf("worker has to leave the company");
	}
}