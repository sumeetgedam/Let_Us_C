/* 
Exercise J(h), a function to find area of trianlge.
Author: gedam 
Created : 10-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	areaOfTrianlge(a, b, c);

}

areaOfTrianlge(int a, int b, int c){
	float S, area;
	S = (a + b + c)/2;
	area = sqrt(S*(S-a)*(S-b)*(S-c));
	printf("Area of triangle : %f", area);


}