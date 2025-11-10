package staticSample;
//static variables are called by using object creation
public class staticSample3 {
int a=809;
public static void main(String[] args) {
	staticSample3  h=new staticSample3 ();
	System.out.println(h.a);
	h.Hello();
	
}

void Hello() {
	System.out.println("hai");
}

}

