/* 
Exercise J(c), a function to print fibonacci numbers till 25 with recurssion
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int i = 1;
	for(;i <= 25; i++){
		printf("%d ", fibonacciRec(i));
	}
}
fibonacciRec(int n){
	if(n <= 1){
		return (n);
	}
	
	return (fibonacciRec(n-1) + fibonacciRec(n-2));
	
}