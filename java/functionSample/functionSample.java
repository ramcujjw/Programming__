package functionSample;

import java.util.Scanner;
public class functionSample {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.println("Enter two numbers");
		int num1 =s.nextInt();
		int num2=s.nextInt();
		int sum =Sum(num1,num2);
		
		System.out.println(sum);
	}



static int Sum(int a,int b) {
	int result= a+b;
	return result;
}
}