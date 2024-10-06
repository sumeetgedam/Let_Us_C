/* 
Exercise D(e), a function to obtain prime factors for
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
main()
{
	int num;
	printf("Enter a number to obtain prime factors : ");
	scanf("%d", &num);
	primeFactors(num);
	
}
primeFactors(int n){
	while(n%2 == 0){
		printf("%d ", 2);
		n = n / 2;
	}
	int i;
	for(i = 3; i * i <= n; i = i + 2){
		while(n%i == 0){
			printf("%d ", i);
			n = n / i;
		}
	}
	if(n > 2){
		printf("%d", n);
	}
}