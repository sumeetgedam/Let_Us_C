/* 
Exercise B(f), Simulat ematchStick game
Author: gedam 
Created : 27-09-2024 
*/
#include<stdio.h>
main()
{

	int match_sticks = 21, user_choice, computer_choice;
	while(match_sticks >= 1){
		printf("Match Sticks available : %d\n", match_sticks);
		printf("Pick up match sticks between (1 to 4) : ");
		scanf("%d", &user_choice);
		if(user_choice > 4)
		{
			printf("Invalid input");
			break;
		}
		// now we are taking the maximum combination the could be 5
		// As we consider only 20 sticks (last one for the loser) and divide it into 4 parts so that 20 is completed when both players have picked the sticks and last one is picked by user as it will have no other option
		computer_choice = 5 - user_choice;
		printf("Computer picks up : %d\n", computer_choice);
		match_sticks = match_sticks - user_choice - computer_choice;
		if(match_sticks == 1){
			printf("You lost\n");
			break;
		}
	}


}