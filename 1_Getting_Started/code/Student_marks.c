/* 
Calculation of agregate marks and percentage as per Exercise H(c)
Author: gedam 
Created : 17-09-2024 
*/
#include<stdio.h>
main()
{
	float subject_a_marks, subject_b_marks, subject_c_marks, subject_d_marks, subject_e_marks;
	printf("Enter space separated marks of five subjects\n");
	scanf("%f %f %f %f %f", &subject_a_marks, &subject_b_marks, &subject_c_marks, &subject_d_marks, &subject_e_marks);

	float aggregate_marks = subject_a_marks + subject_b_marks + subject_c_marks + subject_d_marks + subject_e_marks;
	float percentage = (aggregate_marks / 500) * 100;

	printf("aggregate_marks : %f\npercentage obtained : %f\n", aggregate_marks, percentage);

}
