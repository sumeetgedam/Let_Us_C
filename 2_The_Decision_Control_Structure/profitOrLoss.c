/* 
Exercise C(a) , determine profit or loss + how much
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int costPrice, sellingPrice;
	scanf("%d %d", &costPrice, &sellingPrice);
	if(sellingPrice - costPrice > 0){
		printf("Profit : %d\n", (sellingPrice - costPrice));
	}else{
		printf("Loss : %d\n", (sellingPrice - costPrice));
	}
}