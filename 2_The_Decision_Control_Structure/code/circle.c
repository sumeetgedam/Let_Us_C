/* 
Exercise C(k), determine wheater point inside, outside or on the circle
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	int x, y, radius;
	printf("Enter center coordinates and radius of circle : ");
	scanf("%d %d %d", &x, &y, &radius);
	int x1, y1;
	printf("Enter a coordinates of a point : ");
	scanf("%d %d", &x1, &y1);
	int distance = sqrt(pow(x1-x, 2) + pow(y1-y, 2));
	if(distance < radius){
		printf("Point entered is inside circle\n");
	}else if(distance == radius){
        printf("Point is on the circle\n");
    }else{
		printf("Point entered is outside circle\n");
	}
}