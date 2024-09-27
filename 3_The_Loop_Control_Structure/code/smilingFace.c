/* 
Exercise E(b), to fill screen with smiling face
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int i, j;
	for(i = 0; i <= 50; i++){
		for(j = 0; j <= 50; j++){
			printf("%c", 1);// The smiling face symbol for 1 belongs to an extended character set for MS DOS-consoles only. If the printing of 1 gets you no visible output, your terminal uses the standard ASCII character set and with printing 1 you actually trigger SOH (Start of Heading).
		}
        printf("\n");
	}
}