/* 
division Method- I
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int m1, m2, m3, m4, m5, per;
	printf("Enter marks for five subjects");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	per = ( m1 + m2 + m3 + m4 + m5) / 5;

	if ( per >= 60 )
		printf("First division\n");
	else
	{
		if ( per >= 50)
			printf("Second division\n");
		else
		{
			if ( per >= 40 )
				printf("Third division\n");
			else
				printf("Fail\n");
		}
	}
}