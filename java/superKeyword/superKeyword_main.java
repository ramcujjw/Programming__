package superKeyword;

public class superKeyword_main extends superKeyword {
	void display() {
		System.out.println("Child class");
		super.display();
		
		System.out.println(super.a);
	}

	
public static void main(String[] args) {
	
	superKeyword_main s =new superKeyword_main();
	s.display();
	
}
}
