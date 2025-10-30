/*
 ============================================================================
 Name        : swapping_of_2_numbers.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,t;
		printf("Enter Two Numbers");
		scanf("%d%d",&x,&y);
		t=x;
		x=y;
		y=t;
		printf("x= %d y=%d" ,x,y);
	return EXIT_SUCCESS;
}
