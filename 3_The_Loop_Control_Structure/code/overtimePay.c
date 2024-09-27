/* 
Exercise B(a), to calculate overtime pay of 10 employees
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{
	int num_of_hours, overtime_pay = 12, minimum_hour = 40, num_of_employees = 10;
	int i = 1;
	while(i <= num_of_employees){
		printf("Enter number of hours worked by employee %d : ", i);
		scanf("%d", &num_of_hours);
		int total_overtime_pay = 0;
		if(num_of_hours > minimum_hour){
			total_overtime_pay = overtime_pay * (num_of_hours -  minimum_hour);
		}
		printf("Overtime Pay for employee %d is %d\n", i, total_overtime_pay);
        i = i + 1;
	}   


}