/* 
Exercise J(d), a function to print binary equivalent of a number with recurssion
Author: gedam 
Created : 06-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int num;
	scanf("%d", &num);
	binaryEquivalent(num);
}
binaryEquivalent(int n){
	if(n <= 0){
		printf("%d", 0);
		return;
	}
	
	binaryEquivalent(n/2);
	printf("%d", n%2);

	// if(n==0)
    // {
    //     return 0;
    // }
    // else
    // {
    //     return ((n%2)+10*binaryEquivalent(n/2));
    // }
}