package project;
import javax.swing.JFrame;
public class Calculator {
	
		public Calculator() {
			JFrame jf =new JFrame("Calculator");
			jf.setSize(500,600);
			jf.setLayout(null);
			
			jf.setVisible(true);
		}

	public static void main(String[] args) {
		new Calculator();	//same as Calculator c=new Calculator()
	}
	}

