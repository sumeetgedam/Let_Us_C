/* 
Calculation of total expenses
Author: gedam 
Created : 20-09-2024 
*/
#include<stdio.h>
main()
{
	int qty, dis = 0;// necessary as in C a variable is not specigically initialized , it contains sme unpredictable value ( garbage value )
	float rate, tot;
	printf("Enter quantity and rate: ");
	scanf("%d %f", &qty, &rate);
	if(qty > 1000)
		dis = 10;
	tot = (qty * rate) - (qty * rate * dis / 100);
	printf("Total expenses = %f", tot);
	
}