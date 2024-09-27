/* 
Exercise B(d), to print all ascii values
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{

	int x = 0;
	while(x <= 255){
		printf("Ascii value of %d is %c\n", x, x);
		x = x + 1;
	}


}