/* 
Exercise B(i), to calculate the range of entered numbers
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
#include<limits.h>
main()
{

	int number, smallest=INT_MAX, largest=INT_MIN, i = 5;
	while(i > 0){
		printf("Enter a number : ");
		scanf("%d", &number);
		if(number < smallest){
			smallest = number;
		}
		if(number > largest){
			largest = number;
		}
		i--;
	}
	printf("Entered number range is %d", (largest - smallest));

}