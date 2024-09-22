/* 
Exercise F(c), to determine Person insured or not
Author: gedam 
Created : 22-09-2024 
*/
#include<stdio.h>
main()
{
	char gender;
	int age, premium = -1, amount = 0, health, place;
	printf("gender(m/f) : ");
	scanf("%c", &gender);
	printf("Enter person's age : ");
	scanf("%d", &age);
	printf("health status(1 for Excellent, 0 for Poor) : ");
	scanf("%d", &health);
	printf("lives in (1 for City and 0 for Village) : ");
	scanf("%d", &place);

	printf("%c %d %d %d\n", gender, age, health, place);
	if(health == 1 && age >= 25 && age<= 35 && place == 1){
			if(gender == 'm'){
				premium = 4000;
				amount = 200000;
				printf("premium rate : %d, mazimum amount : %d", premium, amount);
			}else{
				premium = 3000;
				amount = 100000;
				printf("premium rate : %d, mazimum amount : %d", premium, amount);
			}
		
	}else if(health == 0 && age >= 25 && age<= 35 && place == 0 && gender == 'm'){
			premium = 6000;
			amount = 10000;
			printf("premium rate : %d, mazimum amount : %d", premium, amount);
		}
	else{
		printf("Person not Insured");
	}
	

	

}