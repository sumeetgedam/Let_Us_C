/* 
Exercise H(k), e total number of currency notes of each denomination the cashier will have to give to the withdrawer.
Author: gedam 
Created : 19-09-2024 
*/
#include<stdio.h>
main()
{
	int amount_to_withdraw;
	printf("Enter Amount to be withdrawn in 100's : ");
	scanf("%d", &amount_to_withdraw);
	int temp = amount_to_withdraw;
	int hundered = 0, fifty = 0, ten = 0;
	while(temp > 0){
		if(temp / 100){
			hundered += temp / 100;
			temp = temp % 100;
		}
		else if(temp / 50){
			fifty += temp / 50;
			temp = temp % 50;
		}else if(temp / 10){
			ten += temp / 10;
			temp = temp % 10;
		}
	}
	printf("%d 100's , %d 50's, %d 10's\n", hundered, fifty, ten);
}


 

