/*
 ============================================================================
 Name        : Assignment_day2.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//1.accept a char i/p from the user and display it on the console

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	char a;
//		 printf("Enter a character:");
//		 scanf("%c",&a);
//		 printf("You have entered the character %c",a);
//	return EXIT_SUCCESS;
//}

//2.Accept two inputs from the user and output its sum
//Variable            //Data Type
//Number 1             //Integer
//Number 2          //Float
//Sum              //Float


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int x;
//	float y,sum;
//	printf("Enter Number 1\n");
//	scanf("%d",&x);
//	printf("Enter Number 2\n");
//	scanf("%f",&y);
//	sum=x+y;
//	printf("sum of the numbers is %f" ,sum);
//	return EXIT_SUCCESS;
//}
//


//3.Write a program to find the simple interest.
//Program should accept 3 inputs from the user and calculate simple interest for the given inputs. Formula: SI=(P*R*n)/100)

//Variable       //Data Type
//Principal amount (P)      //Integer
//Interest rate (R)      //Float
//Number of years (n)      //Float
//Simple Interest (SI)      //Float

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float r,n,SI;
	printf("Enter The Principal Amount\n");
	scanf("%d",&P);
	printf("Enter The Rate of Interest\n");
	scanf("%f",&r);
	printf("Enter The number of year\n");
	scanf("%f",&n);
	SI=(P*r*n)/100;
	printf("SI is %f" ,SI);
	return EXIT_SUCCESS;
}

