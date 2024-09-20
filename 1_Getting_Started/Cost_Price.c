/* 
Exercise H(l), cost price of each item 
Author: gedam 
Created : 19-09-2024 
*/
#include<stdio.h>
main()
{
	float total_selling_price, total_profit;
	printf("Enter total selling price of 15 items and the profit earned on them ( space separated ) : ");
	scanf("%f %f", &total_selling_price, &total_profit);
	float total_cost_price = total_selling_price - total_profit;
	printf("Cost price of one item : %f", total_cost_price / 15);
}
