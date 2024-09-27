/* 
Exercise E(d), to generate all numbers of combination of 1, 2, 3
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j, k;
	for(i = 1; i<=3; i++){
		for(j = 1; j <= 3; j++){
			for(k = 1; k <= 3; k++){
				if(i != j && j != k && i != k)
					printf("%d%d%d\n",i, j, k );
			}
		}
	}
}