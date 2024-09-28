/* 
Exercise E(i), to numeric pattern
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j, number = 1;
	for(i = 1; i <= 4; i++){
		for(j = 4 - i; j >= 0; j--){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf(" %d", number++);
		}
		printf("\n");

	}
}