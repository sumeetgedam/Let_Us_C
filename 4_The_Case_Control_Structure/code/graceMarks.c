/* 
Exercise D, to calculate grace marks as per class and failed subjects
Author: gedam 
Created : 28-09-2024 
*/
#include<stdio.h>
main()
{
	int class, failed, grace;
	printf("\nEnter the class obtained by Student ( 1 for first, 2 for second, 3 for third) and number of subjects he has failed in : ");
	scanf("%d %d", &class, &failed);
	switch(class){
	case 1:
		if(failed > 3){
			grace = 0;
		}else{
			grace = 5;
		}
		break;
	case 2:
		if(failed > 2){
			grace = 0;
		}else{
			grace = 4;
		}
		break;
	case 3:
		if(failed > 1){
			grace = 0;
		}else{
			grace = 5;
		}
		break;
	}
	printf("\nGrace marks obtained by students is : %d\n", grace);
}