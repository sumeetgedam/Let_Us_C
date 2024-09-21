/* 
Exercise C(j), determine 3 points lie on a straight line
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	int slope1 = (y2-y1)/(x2-x1);
	int slope2 = (y3-y2)/(x3-x2);
	if(slope1 == slope2){
		printf("Points fall on one line\n");
	}else{
		printf("Points don't fall on same line\n");
	}
}