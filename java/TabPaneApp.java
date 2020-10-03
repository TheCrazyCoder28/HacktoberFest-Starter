import javax.swing.*;  
import java.awt.Color;

public class TabPaneApp {  
	
	JFrame f;  
	TabPaneApp(){  
		f=new JFrame();  
    
		JLabel t1 = new JLabel("1");  
	    t1.setForeground(Color.RED);
	    JLabel t2 = new JLabel("10");  
	    t2.setForeground(Color.RED);
	    JLabel t3= new JLabel("11");  
	    t3.setForeground(Color.RED);  
	    JPanel p1=new JPanel();  
	    p1.setBackground(Color.BLACK);
	    p1.add(t1);  
	
	    JPanel p2=new JPanel();  
	    p1.add(t2);  
	
	    JPanel p3=new JPanel();     
	    p1.add(t3);  
	
	    
	    JTabbedPane tp=new JTabbedPane(); 
	    tp.setBounds(0,0,300,200);  
	    tp.add("main",p1);  
	    tp.add("visit",p2);  
	    tp.add("help",p3);    
	    
	    f.add(tp);  
	    f.setSize(300,200);  
	    f.setLayout(null);  
	    f.setVisible(true);  
}  
public static void main(String[] args) {  
    new TabPaneApp();  
}}  