/* 
Calculation of gross salary of Ramesh as per question in Excersion H(a)
Author: gedam 
Created : 14-09-2024 
*/
#include<stdio.h>
main()
{
	float base_salary;
	scanf("%f", &base_salary);
	float dearness_allowance = 0.4 * base_salary, house_rent_allowance = 0.2 * base_salary;

	float gross_salary = base_salary + dearness_allowance + house_rent_allowance;

	printf("%f\n", gross_salary);

}