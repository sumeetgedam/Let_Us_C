/* 
Exercise J(k), a function to compute the greatest common divisor given by Euclid’s algorithm
Author: gedam 
Created : 10-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int a, b, gcd;
	scanf("%d %d", &a, &b);
	gcd = euclidAlgorithm(a, b);
	printf("%d", gcd);

}

euclidAlgorithm(int x, int y){
	if(y == 0){
		return x;
	}
	euclidAlgorithm(y, (x - ((x/y)*y)));
}