package forSample;

import java.util.Scanner;

public class forSample {
	public static void main(String ar[]) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the numbers");
		int num=sc.nextInt();
		int sum=0;
		for(int i=0;i<num;i++) {
			
			sum=sum+i;
		}
		System.out.println("Sum of  number is"+sum);
	}
}
