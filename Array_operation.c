/*
 ============================================================================
 Name        : Array_operation.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//============print an array=====================
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int a[100];
//	int i,limit;
//
//	printf("Enter the array limit:");
//	scanf("%d",&limit);
//	printf("enter the array:");
//	for(i=0;i<limit;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("entered array: ");
//		for(i=0;i<limit;i++){
//			printf("%d\t",a[i]);
//		}
//
//	return EXIT_SUCCESS;
//}


//========sum of an array===============

//#include <stdio.h>
//#include <stdlib.h>
// int main (void){
//	 int sum=0,i,a[70],limit;
//	 printf("enter the limit:");
//	 scanf("%d",&limit);
//	 printf("Enter the array elements");
//	 for(i=0;i<limit;i++){
//	 scanf("%d",&a[i]);
//	 }
//	for(i=0;i<limit;i++){
//		sum=sum+a[i];
//	}
//	 printf("sum of array:%d",sum);
//
//
// }


//==============selection sort=================

//#include <stdio.h>
//int main(void){
//	int a[100],selectionkey,i,flag=0,limit;
//	printf("Enter the limit:");
//	scanf("%d",&limit);
//
//	printf("enter the array:");
//	for(i=0;i<limit;i++){
//		scanf("%d",&a[i]);
//	}
//
//	printf("Enter the element to be searched:");
//	scanf("%d",&selectionkey);
//
//	for(i=0;i<limit;i++){
//
//			if(selectionkey==a[i]){
//				flag=1;
//				break;
//			}
//			}
//		if(flag==1){
//					printf("The element is at the %d position" ,i+1);
//					}
//					else{
//						printf("element is not found");
//					}
//	}


//==============selection sorting============
#include <stdio.h>
int main(void){
	int a[100],i,j,size,temp;
	printf("Enter the size of the array");
	scanf("%d",&size);

	printf("Enter the array:");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
		printf("sorted array:");
			for(i=0;i<size;i++){
				printf("%d\t",a[i]);
			}
	}


}
