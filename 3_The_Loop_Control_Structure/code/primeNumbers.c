/* 
Exercise E(a), to  print all prime number between 1 and 300
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j;
	for( i = 1; i <= 300; i++){

		for( j = 2; j <= i-1; j++){
			if(i%j == 0){
				break;
			}

		}
		if(i == j){
			printf("%d\t", i);
		}
	}
}