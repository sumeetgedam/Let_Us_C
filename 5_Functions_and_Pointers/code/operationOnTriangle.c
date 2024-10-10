/* 
Exercise J(j), a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle
Author: gedam 
Created : 10-10-2024 
*/
#include<stdio.h>
#include<math.h>
main()
{
	float distInPoints(int m, int n, int o, int p);
	float areaOfTrianlge(float a, float b, float c);
	int inTrianlge(float a, float b, float c, int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);
	int x1, y1, x2, y2, x3, y3, x, y, inOrNot;
	float a, b, c, area;
	printf("Enter values for x1 y1 x2 y2 x3 y3 (in order) : ");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	a = distInPoints(x1, y1, x2, y2);
	b = distInPoints(x2, y2, x3, y3);
	c = distInPoints(x3, y3, x1, y1);
	printf("\nThe length of 3 sides of given triangle : %f %f %f\n", a, b, c);
	area = areaOfTrianlge(a, b, c);
	printf("\nArea of given triangle : %f\n", area);
	printf("Enter a point to check wheater it lies inside triangle :");
	scanf("%d %d", &x, &y);
	inOrNot = inTrianlge(a, b, c, x1, y1, x2, y2, x3, y3, x, y);
	printf("\nPoints lies : %d\n", inOrNot);

}

float distInPoints(int p, int q, int r, int s){
	float dist;
	dist = sqrt((r-p)*(r-p) + (s-q)*(s-q));
	return dist;
}

float areaOfTrianlge(float a, float b, float c){
	float S, area;
	S = (a + b + c)/2;
	area = sqrt(S*(S-a)*(S-b)*(S-c));
	return area;
}

inTrianlge(float a, float b, float c, int x1, int y1, int x2, int y2, int x3, int y3, int x, int y){
	float A, B, C, D, p1, p2, p3, res;
	A = areaOfTrianlge(a, b, c);


	p1 = distInPoints(x, y, x1, y1);
	p2 = distInPoints(x, y, x2, y2);
	p3 = distInPoints(x, y, x3, y3);


	B = areaOfTrianlge(p2, p3, b);
	C = areaOfTrianlge(p1 , p2, a);
	D = areaOfTrianlge(p1, p3, c);
	
	res = A - (B + C + D);
	printf("%f %f %f %f %f", A, B, C, D, res);
	if(res == 0 || res < 0.001){
        return (1);
    }
    else{
        return (0);
    }
}