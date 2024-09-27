/* 
Exercise B(g), to calculate number of positive, negatice and zeros entered
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{

	int number, next, positive = 0, negative= 0, zero = 0;
	while(1){
		printf("do you want to continue (1 for yes / 0 for no) : ");
		scanf("%d", &next);
		if(next == 0){
			break;
		}
		printf("Enter a number : ");
		scanf("%d", &number);
		if(number > 0){
			positive++;
		}else if(number < 0){
			negative++;
		}else{
			zero++;
		}
	}
	printf("Entered %d positive %d negative %d zeros", positive, negative, zero);



}