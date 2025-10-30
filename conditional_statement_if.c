/*
 ============================================================================
 Name        : conditional_statements.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//if condition
//greatest number between 2 numbers
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1,num2;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the  second number\n:");
	scanf("%d",&num2);
	if(num1>num2){
		printf("The number %d is greater",num1);
	}
	else{
		printf("The number %d is greater",num2);
	}

	return EXIT_SUCCESS;
}
