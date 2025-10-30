/*
 ============================================================================
 Name        : for_loop_conditional_statements.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//print n natural numbers
//=========================================================================================

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int i,n;
//	printf("Enter the number: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		printf("%d\n",i);
//	}
//	return EXIT_SUCCESS;
//}


//==========================================print n even numbers===========

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int i,n;
//	printf("Enter the number: ");
//	scanf("%d",&n);
//	for(i=2;i<=n;i++) { //for(i=2;i<=n;i+=2)
//		if(i%2==0){
//
//		printf("%d\n",i);
//	}}
//	return EXIT_SUCCESS;
//}
//

//=================================print prime numbers ==============

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int i,n,flag=0;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	for(i=2;i<=n/2;i++){
//		if(n%i==0){
//		flag=1;
//		break;
//		}
//	}
//	if(flag==0){
//		printf("prime number");
//
//	}
//	else{
//		printf("non prime");
//	}
//
//}


//================================print * pattern=================


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int i,n,j;
//	printf("Enter the number of rows:");
//	scanf("%d",&n);
//
//	for(i=1;i<=n;i++){
//		for(j=0;j<i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}



//=======================star============
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int i,n,j;
//	printf("Enter the number of rows:");
//	scanf("%d",&n);
//
//	for(i=1;i<=n;i--){
//		for(j=0;j<i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//=================break================
//#include <stdio.h>
//int main(void){
//
//	for(int i=0;i<10;i++){
//		printf("hi\n");
//		if(i==5){
//			break;
//		}
//		printf("Hello\n");
//	}
//	printf("Finished");
//}

//=============continue==============
#include <stdio.h>
int main(void){
	for(int i=0;i<10;i++){
		printf("hi\n");
		if(i==5){
			continue;
		}
		printf("hello\n");
	}
	printf("Finished");
}
