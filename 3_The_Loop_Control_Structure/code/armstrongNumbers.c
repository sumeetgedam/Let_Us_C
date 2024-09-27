/* 
Exercise B(e), to print all armstrong numbers between 1 to 500
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{

	int x = 1;
	while(x <= 500){
		int temp = x, total = 0;
		while(temp > 0){
			int dig = temp%10;
			total = total + (dig * dig * dig);
			temp  = temp / 10;
		}
		if(total == x){
			printf("%d\t", x);
		}
		x = x + 1;
	}


}