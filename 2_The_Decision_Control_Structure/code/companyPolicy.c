/* 
Exercise F(j), to determine if order is shipped or not
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	int order, hasCredit, stock;
	printf("Enter customer order, hasCredit(1 for OK, 0 for not) , stock available : ");
	scanf("%d %d %d", &order, &hasCredit, &stock);
	if(!hasCredit){
		printf("You do not have required credit\n");
	}else if(order < stock){
		printf("order has been shipped");
	}else{
		printf("%d has shipped, %d will be balanced to be shipped\n", stock, (order-stock));
	}
}