/* 
Exercise I(b), to convert given code into conditional operators
Author: gedam 
Created : 24-09-2024 
*/
#include<stdio.h>
main()
{
	int code;
	scanf("%d", &code);
	code > 1 ? (printf ( "\nJerusalem" )): ( code < 1 ? (printf ( "\nEddie" )):(printf ( "\nC Brain" )));
	
}