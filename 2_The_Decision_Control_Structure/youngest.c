/* 
Exercise C(f), to fetermine the youngestss
Author: gedam 
Created : 21-09-2024 
*/
#include<stdio.h>
main()
{
	int ramAge, shyamAge, ajayAge;
	scanf("%d %d %d", &ramAge, &shyamAge, &ajayAge);
	if(ramAge < shyamAge && ramAge < ajayAge){
		printf("Ram\n");
	}else if(shyamAge < ramAge & shyamAge < ajayAge){
		printf("Shyam\n");
	}else{
		printf("Ajay\n");
	}
}