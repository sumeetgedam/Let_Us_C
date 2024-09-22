/* 
Exercise F(b), to determine entered is capital , small, special , digit
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	char c;
	scanf("%s", &c);
	if(c >= 65 && c <= 90){
		printf("A Capital letter\n");
	}
	else if(c >= 97 && c <= 122){
		printf("A Small letter\n");
	}
	else if(c >= 48 && c <= 57){
		printf("A Digit\n");
	}
	else{
		printf("Special Symbol\n");
	}
	
}