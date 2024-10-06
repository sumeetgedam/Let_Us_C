/* 
Exercise J(e), a function to print running sum of natural numbers with recurssion
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	// int num;
	// scanf("%d", &num);
	int i = 1;
	for(; i <= 25; i++){
		printf("%d ", runningSum(i));
	}
}
runningSum(int i){
	if(i == 0){
		return 0;
	}
	return i + runningSum(i-1);
	
}