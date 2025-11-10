package polymorphism;

public class method_overriding_sample extends method_overriding {
	void display(){
		System.out.println("child class");
	}
public static void main(String[] args) {
	method_overriding_sample m=new method_overriding_sample();
	m.display();
}
}
