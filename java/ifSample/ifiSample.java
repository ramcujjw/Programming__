package ifSample;
import java.util.Scanner;
public class ifiSample {
	public static void main(String arr[]) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the  number");
		int num1=sc.nextInt();
		
		if(num1<0) {
			System.out.print("Negative Number");
		}
		else {
			System.out.print("Positive number");
		}
	}
}
