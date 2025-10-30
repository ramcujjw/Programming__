/*
 ============================================================================
 Name        : sum_of_2_numbers.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,sum;
	printf("Enter Two Numbers");
	scanf("%d%d",&x,&y);
	sum=x+y;
	printf("sum of the numbers is %d" ,sum);
	return EXIT_SUCCESS;
}
