package project;
import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
public class Calculator implements ActionListener{
	
		public Calculator() {
			JFrame jf =new JFrame("Calculator");
			jf.setSize(500,600);
			jf.setLayout(null);
			jf.setLocation(250, 70);
			//to display 
			JLabel displayLabel=new JLabel("HELLO");
			displayLabel.setBounds(25, 50, 450, 40);
			displayLabel.setBackground(Color.GRAY);
			displayLabel.setOpaque(true);
			displayLabel.setForeground(Color.WHITE);
			//display screen to the right side 
			displayLabel.setHorizontalAlignment(SwingConstants.RIGHT);
			jf.add(displayLabel);
			
			//TO DISPLAY BUTTONS
			JButton sevenButton =new JButton("7");
			sevenButton.setBounds(30, 130, 80, 80);
			sevenButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(sevenButton);
			
			JButton eightButton =new JButton("8");
			eightButton.setBounds(130, 130, 80, 80);
			eightButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(eightButton);
			
			JButton nineButton =new JButton("9");
			nineButton.setBounds(230, 130, 80, 80);
			nineButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(nineButton);
			
			JButton fourButton =new JButton("4");
			fourButton.setBounds(30, 230, 80, 80);
			fourButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(fourButton);
				
			JButton fiveButton =new JButton("5");
			fiveButton.setBounds(130, 230, 80, 80);
			fiveButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(fiveButton);
//			
			JButton sixButton =new JButton("7");
			sixButton.setBounds(230, 230, 80, 80);
			sixButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(sixButton);
		
			JButton oneButton =new JButton("1");
			oneButton.setBounds(30, 330, 80, 80);
			oneButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(oneButton);
	
			JButton twoButton =new JButton("2");
			twoButton.setBounds(130, 330, 80, 80);
			twoButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(twoButton);
			
			JButton threeButton =new JButton("3");
			threeButton.setBounds(230, 330, 80, 80);
			threeButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(threeButton);
			
			JButton dotButton =new JButton(".");
			dotButton.setBounds(30, 430, 80, 80);
			dotButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(dotButton);
	
			JButton zeroButton =new JButton("0");
			zeroButton.setBounds(130, 430, 80, 80);
			zeroButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(zeroButton);
			
			JButton equalButton =new JButton("=");
			equalButton.setBounds(230, 430, 80, 80);
			equalButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(equalButton);
			//operations
			JButton divButton =new JButton("/");
			divButton.setBounds(330, 130, 80, 80);
			divButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(divButton);
			
			JButton mulButton =new JButton("*");
			mulButton.setBounds(330, 230, 80, 80);
			mulButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(mulButton);
			
			JButton subButton =new JButton("-");
			subButton.setBounds(330, 330, 80, 80);
			subButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(subButton);
			
			JButton addButton =new JButton("+");
			addButton.setBounds(330, 430, 80, 80);
			addButton.setFont(new Font("Serif",Font.PLAIN,40));
			jf.add(addButton);
			
			jf.setVisible(true);
			jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//to stop the project on closing the window
		}

	public static void main(String[] args) {
		new Calculator();	//same as Calculator c=new Calculator()
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		
	}
	}

