/*
 ============================================================================
 Name        : Assignment_day3.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Write a program to check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).
//Program should accept an input from the user and output a message as “Passed” or “Failed”
//Variable 	Data type
//mark	float

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//
//	float mark;
//	printf("Enter your mark:");
//	scanf("%f",&mark);
//
//	if((mark>=50)){
//		printf("PASSED");
//	}
//	else{
//		printf("FAILED!!!");
//	}
//
//	return EXIT_SUCCESS;
//}
//
//==================================================================================

//Write a program to show the grade obtained by a student after he/she enters their total mark percentage.
//Program should accept an input from the user and display their grade as follows
//Mark	Grade
//< 90	A
//80-89	B
//70-79	C
//60-69	D
//50-59	E
//< 50	Failed

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//float mark;
//
//printf("Enter your mark percentage:");
//scanf("%f",&mark);
//if(mark>=90){
//	printf("Your grade is A");
//}
//else if(mark>=80){
//	printf("Your grade is B");
//}
//else if(mark>=70){
//	printf("Your grade is c");
//}
//else if(mark>=60){
//	printf("Your grade is D");
//}
//else if(mark>=50){
//	printf("Your grade is E");
//}
//else{
//printf("Failed");
//}
//return EXIT_SUCCESS;
//}


//Using the ‘switch case’ write a program to accept an input number from the user and output the day as follows.
//Input
//Output
//1		Sunday
//2		Monday
//3		Tuesday
//4  Wednesday
//5		Thursday
//6		Friday
//7		Saturday
//Any other input		Invalid Entry
#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int choice;
	printf("1.Sunday \n2.Monday \n3.Tuesday \n4.Wednesday \n5.Thursday \n6.Friday \n7.Saturday\n");
	printf("Enter your choice");
	scanf("%d",&choice);

	switch(choice){
	case 1:
	{
		printf("ITS Sunday");
		break;
	}
	case 2:
		{
			printf("ITS Monday");
			break;
		}
		case 3:
		{
			printf("ITS Tuesday");
			break;
		}
		case 4:
			{
				printf("ITS Wednesday");
				break;
			}

		case 5:
			{
				printf("ITS Thursday");
				break;
			}
		case 6:
			{
				printf("ITS Friday");
				break;
			}
		case 7:
			{
				printf("ITS Saturday");
				break;
			}
		default:
		{
			printf("Invalid Input");
		}

	}
	return EXIT_SUCCESS;
}



