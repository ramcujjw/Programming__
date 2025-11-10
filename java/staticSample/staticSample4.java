package staticSample;

public class staticSample4 {
int a=90;
static int b=200;
public static void main(String[] args) {
	staticSample4 s=new staticSample4();
	staticSample4 s1=new staticSample4();
	System.out.println(s.a);
	s.hello();
	s.b=78;
	s1.b=40;
	s1.a=100;
	System.out.println(s1.a);
	System.out.println(s1.b);
	System.out.println(s.b);
}
void hello() {
	System.out.println("function which is not static");
}
static void hai() {
	System.out.println("static function");
}
}
