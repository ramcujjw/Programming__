/*
 ============================================================================
 Name        : Assignment_day5.c
 Author      : ramcy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Write a program to interchange the values of two arrays
//Program should accept an array from the user, swap the values of two arrays and display it on the console
//Eg: Output: Enter the size of arrays
//Input: 5
//Output: Enter the values of Array 1
//Input: 10, 20, 30, 40, 50
//Output: Enter the values of Array 2
//Input: 15, 25, 35, 45, 55
//Output: Arrays after swapping:
//Array1: 15, 25, 35, 45, 55
//Array2: 10, 20, 30, 40, 50
//==================================================

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int i,size,a[100],b[100],temp[100];
//	printf("Enter the size of the array:");
//	scanf("%d",&size);
//
//	printf("Enter  the first array:");
//	for(i=0;i<size;i++){
//		scanf("%d",&a[i]);
//	}
//
//	printf("Enter  the second array:");
//		for(i=0;i<size;i++){
//			scanf("%d",&b[i]);
//		}
//
////swapping
//		for(i=0;i<size;i++){
//			temp[i]=a[i];
//			a[i]=b[i];
//			b[i]=temp[i];
//		}
//printf("Array after swapping\n" );
//
//
//printf("Array 1:\n");
//for(i=0;i<size;i++){
//	printf(" %d\t",a[i]);
//}
//printf("\nArray 2:\n");
//for(i=0;i<size;i++){
//	printf(" %d\t",b[i]);
//}
//
//
//	return EXIT_SUCCESS;
//}

//================================================================================
//2.Write a program to find the number of even numbers in an array
//Program should accept an array and display the number of even numbers contained in that array
//Eg: Output: Enter the size of an array
//Input: 5
//Output: Enter the values of array
//Input: 11, 20, 34, 50, 33
//Output: Number of even numbers in the given array is 3


//#include <stdio.h>
//int main(void){
//	int a[100],i,size,count=0;
//	printf("Enter the size of the array");
//	scanf("%d",&size);
//
//	printf("Enter the array:");
//	for(i=0;i<size;i++){
//		scanf("%d",&a[i]);
//	}
//	//even nos count
//	for(i=0;i<size;i++){
//		if(a[i]%2==0){
//			count++;
//		}
//	}
//	printf("Number of even numbers in the given array is:%d",count);
//}

//=======================================================================
//3.Write a program to sort an array in descending order
//Program should accept and array, sort the array values in descending order and display it
//Eg: Output: Enter the size of an array
//Input: 5
//Output: Enter the values of array
//Input: 20, 10, 50, 30, 40
//Output: Sorted array:
//50, 40, 30, 20, 10

#include <stdio.h>
int main(void){
	int a[100],i,j,size,temp[100];
	printf("Enter the size of the array");
	scanf("%d",&size);

	printf("Enter the array:");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("sorted array:");
for(i=0;i<size-1;i++){
	for(int j=i+1;j<size;j++){
	if(a[i]<a[j]){
		temp[i]=a[i];
		a[i]=a[j];
		a[j]=temp[i];
	}
	}
}
for(i=0;i<size;i++){
	printf("%d\t",a[i]);
}


}
