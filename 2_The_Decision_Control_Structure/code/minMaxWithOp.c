/* 
Exercise I(a), to convert given code into conditional operators
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{
	int x, min, max ;
    scanf ( "\n%d %d", &max, &x ) ;
    x > max ? (max = x): (min = x);

}