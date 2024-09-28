/* 
Exercise C, to implement menu driven program
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int choice, number;
	while(1){
		printf("\n1. Factorial : ");
		printf("\n2. Prime : ");
		printf("\n3. Odd/Even : ");
		printf("\n4. Exit : ");
		printf("\nYour choice : ");
		scanf("%d", &choice);

		switch(choice){
		case 1:
			printf("Enter a number to calculate Factorial: ");
			scanf("%d", &number);
			int ans = 1, i;
			for(i = 1;i <= number; i++){
				ans = ans * i;
			}
			printf("Factorial of %d is %d", number , ans);
			break;
		case 2:
			printf("Enter a number to check if its a prime: ");
			scanf("%d", &number);
			int j;
			for(j = 2; j <= number - 1; j++){
				if(number % j == 0){
					break;
				}
			}
			if(j == number){
				printf("%d is a prime number\n", number);
			}else{
				printf("%d is not a Prime number\n", number);
			}
			break;
		case 3:
			printf("Enter a number to check if its odd or even: ");
			scanf("%d", &number);
			if(number %2 == 0){
				printf("%d is a even number\n", number);
			}else{
				printf("%d is a odd number\n", number);
			}
			break;
		case 4:
			exit(0);
		}
	}
}