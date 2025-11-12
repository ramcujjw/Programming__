package abstraction;

public class TextScanner {

	abstraction obj;
	public  TextScanner(abstraction obj){
		this.obj=obj;
		}

void scan() {
	String text = "scanned text";
	obj.onText(text);
}

}
