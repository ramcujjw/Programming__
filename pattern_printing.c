/*
 ============================================================================
 Name        : pattern_printing.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//=======================right half triangle=====================

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int rows=5;
//	for(int i=0;i<rows;i++){
//		for(int j=0;j<i;j++){
//			printf("* ");
//		}
//printf("\n");
//	}
//
//	return EXIT_SUCCESS;
//}

//=================Left half triangle====================
#include <stdio.h>
int main(void){
	int i,j;
	int row=4;
	for(i=0;i<row;i++){
		for(j=0;j<row-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
	printf("*");
	}
	printf("\n");
}
}





