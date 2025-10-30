/*
 ============================================================================
 Name        : nested_if_calculator.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,result,choice;
	printf("Enter the First number:\n");
	scanf("%d",&a);
	printf("Enter the Second number:\n");
	scanf("%d",&b);



	printf("Enter you choice:");
	scanf("%d",&choice);
	printf("1 Addition \n2 Subtractio \n3 Multiplication \n4 Division\n");

	if(choice==1){
		result=a+b;
		printf("Result= %d",result);
	}

	else if(choice==2){
			result=a-b;
			printf("Result= %d",result);
		}
	else if(choice==3){
			result=a*b;
			printf("Result= %d",result);
		}
	else if(choice==4){
			result=a/b;
			printf("Result= %d",result);
		}
	else{
		printf("You have entered the wrong choice3");
	}

	return EXIT_SUCCESS;
}
