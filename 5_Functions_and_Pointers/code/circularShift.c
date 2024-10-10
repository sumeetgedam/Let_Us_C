/* 
Exercise J(g), a function to circularly shift their values to right.
Author: gedam 
Created : 10-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("Entered values : %d %d %d", x, y, z);
	shiftRight(&x, &y, &z);
	printf("After Shift: %d %d %d", x, y, z);

}

shiftRight(int *a, int *b, int *c){
	int temp;
	temp = *c;
	*c = *b;
	*b = *a;
	*a = temp;
	
}