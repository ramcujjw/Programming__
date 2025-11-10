//Write a java program to check whether a given number is prime or not
//Program should accept an input from the user and display whether the number is prime or not
//Eg: Output: Enter a number
//Input: 7
package primeNumbers;
import java.util.Scanner;
public class primeNumber {
public static void main(String[] args) {
	int flag=0;
	Scanner s=new Scanner(System.in);
	System.out.println("Enter the number :");
	int num=s.nextInt();
	for(int i=2;i<num;i++) {
		if(num%i==0) {
			
			flag=1;
			break;
		}
		if(flag==1) {
		System.out.println("The number "+num +" is Not prime ");
		}
		else {
			System.out.println("The number "+num+" is Prime");
		}
	}
}
}
