/*
 ============================================================================
 Name        : Assignment_day4.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//======================Write a program to print the multiplication table of given number.
//Accept an input from the user and display its multiplication table===========


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int num,mul;
//	printf("Enter the input: ");
//	scanf("%d",&num);
//
//	for(int i=1;i<=10;i++){
//		mul=i*num;
//		printf("%d*%d=%d\n",i,num,mul);
//	}
//	return EXIT_SUCCESS;
//}

//Write a program to find the sum of all the odd numbers for a given limit
//Program should accept an input as limit from the user and display the sum of all the odd numbers within that limit
//For example if the input limit is 10 then the result is 1+3+5+7+9 = 25
//Output: Enter a limit
//Input: 10
//Output: Sum of odd numbers = 25


//#include <stdio.h>
//int main(void){
//	int limit,i,sum=0;
//	printf("Enter a limit:");
//	scanf("%d",&limit);
//
//	for(i=1;i<=limit;i++){
//		if(i%2!=0){
//			sum=i+sum;
//		}
//	}
//	printf("sum of odd numbers = %d",sum);
//}

//===========Write a program to print the following pattern (hint: use nested loop)
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include <stdio.h>
int main(void){
	int i,limit;
	printf("Enter the limit");
	scanf("%d",&limit);

	for(i=0;i<limit;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",j+1);
		}
	printf("\n");
	}
}

