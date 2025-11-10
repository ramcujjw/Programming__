//Write a menu driven java program to do the basic mathematical operations such as addition, subtraction, multiplication and division (hint: use if else ladder or switch)
//Program should have 4 functions named addition(), substraction(), multiplication() and division()
//Should create a class object and call the appropriate function as user prefers in the main function

package basicMaths;
import java.util.Scanner;
public class basicMaths {
public static void main(String[] args) {
	Scanner s=new Scanner(System.in);
	System.out.println("Enter two numbers");
	int num1=s.nextInt();
	int num2=s.nextInt();
	System.out.println("1. Addition \n 2. Subtraction\n 3. Multiplication\n 4. Division");
	System.out.println("enter Your choice");
	int choice=s.nextInt();
	
	 Maths m=new  Maths();
	 
	switch (choice) {
	case 1:{
		 m.addition(num1,num2);
	}
	break;
	case 2:{
		 m.subtraction(num1, num2);
	}
	break;
	case 3:{
		 m.multiplication(num1, num2);
	}
	break;
	case 4:{
		m.division(num1, num2);
	}
	break;
	
	
	default: {
		System.out.println("Wrong input");
	}
	}
	 m.display();
	
	 
}
}
