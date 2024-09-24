/* 
Exercise J(a), to determine character type
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{
	char c;
	scanf("%c", &c);
	( c >= 97 && c <= 122)? printf("LowerCase\n"): (((c >= 65 && c <= 90) || (c >= 48 && c <= 57))? printf("Neither LowerCase nor special\n"):printf("special symbol"));
}