/* 
Exercise J(b), a function to print prime factors of a numberwith recurssion
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	
	int num, ans;
	scanf("%d", &num);
	primeFactorsRec(num);
}
primeFactorsRec(int n){
	int i;
	if(n == 0){
		return;
	}
	for(i = 2; i<=n; i++){
		if(isPrime(i) && n %i == 0){
			printf("%d ", i);
			primeFactorsRec(n / i);
			return;
		}
	}
}
isPrime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (i%num == 0)
			break;
		i++;
	}
	if (i == num)
		return 1;
	return 0;
}