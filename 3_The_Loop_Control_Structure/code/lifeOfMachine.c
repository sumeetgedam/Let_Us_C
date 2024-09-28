/* 
Exercise E(h), to calculate the life of machine to be attractive investment
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
main()
{
	int year = 0, invest, alternate;
	do{
		year++;
		// 1000 per year erning , 6000 cost , 2000 salvage or value required to save from damage or destruction
		invest = (1000 * year) - 6000 - 2000;
		// 12 percent per annum, 12 % of 1000
		alternate = 120 * year;
	}while(invest < alternate);
	printf("The life od Machine should be : %d\n", year);
}