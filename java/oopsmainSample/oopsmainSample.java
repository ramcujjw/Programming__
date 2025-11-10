//package oopsmainSample;
//
//public class oopsmainSample {
//	public static void main(String[] args) {
//		mainSample m=new mainSample();
//		m.a=10;
//		m.b=90;
//		m.calculateSum();
//		m.display();
//	}
//}
//with argument
package oopsmainSample;

public class oopsmainSample {
	public static void main(String[] args) {
		mainSample m=new mainSample();
		int num1=10;
		int num2=90;
		m.calculateSum(num1,num2);
		m.display();
	}
}
