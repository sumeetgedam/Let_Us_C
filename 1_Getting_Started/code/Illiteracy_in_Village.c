/* 
Exercise H(j), to calculate illiterate men and women in village
Author: gedam 
Created : 19-09-2024 
*/
#include<stdio.h>
main()
{
	int perc_of_men = 52, perc_of_tot_literacy = 48, perc_of_tot_lit_men = 35, total_population = 80000;
	
	int total_litrate = ( perc_of_tot_literacy / 100.0 ) * total_population; // need to keep it as 100.0 as for 100 it will be interger division and as upper value is less than 100 it will always give 0 as answer
	int total_men = ( perc_of_men / 100.0 ) * total_population;
	int total_lit_men =  ( perc_of_tot_lit_men / 100.0 ) * total_population;
	int total_ill_men = total_men - total_lit_men;

	int total_women = total_population - total_men;
	int total_lit_women = total_litrate - total_lit_men;
	int total_ill_women = total_women - total_lit_women;

	printf("Total Illiterate Men : %d\nTotal Itlliterate Women : %d", total_ill_men, total_ill_women);

}