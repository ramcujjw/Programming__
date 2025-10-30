/*
 ============================================================================
 Name        : switch-statement.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1.porotta \n2.appam \n3.dosa \n4.idli \nEnter the choice:");
	scanf("%d",&choice);


	switch(choice){

	case 1:
		{
			printf("order for porotta");
		}
		break;
	case 2:
		{
			printf("order for appam");
		}
		break;
	case 3:
		{
			printf("order for dosa");
		}
		break;
	case 4:
		{
			printf("order for idli");
		}
		break;
	default:
		{
			printf("Not available");
		}
			}

	return EXIT_SUCCESS;
}
