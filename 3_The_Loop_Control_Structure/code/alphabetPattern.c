/* 
Exercise E(f), to print the mentioned pattern on screen
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j;
	char x;
	for(i = 0; i < 7; i++){
		for(x = 'A'; x <= 'G' - i; x++){
			printf("%c", x);
		}
		for(j = 0; j < 2*i-1; j++){
			printf(" ");
		}
		for(x = 'G' - i; x >= 'A' ; x--){
			if(x == 'G'){
				continue;
			}
			printf("%c", x);
		}
		printf("\n");
	}
}