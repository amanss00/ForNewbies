import java.util.Scanner;

public class Student {
	private String name;
	private int age;
	
	public void getdata()
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the Name : ");
		name = sc.next();
		
		System.out.println("Enter your age : ");
		age = sc.nextInt();

	}
	public void display()
	{
		System.out.println("\nName : " +name);
		System.out.println("Age : " +age);
	}

}

//File 2 :-

import java.util.Scanner;

public class Records {

	public static void main(String[] args) {
		int rec;
		
		Scanner sc1 = new Scanner(System.in);
		
		System.out.println("How many Students do you want to Enter : ");
        rec = sc1.nextInt();
        
        Student[] s1 = new Student[rec];
        
        for(int i = 0;i < rec;i++)
        {
        	s1[i] = new Student();
        }
        
        for(int i = 0;i < rec;i++)
        {
        	s1[i].getdata();
        }
        for(int i = 0;i < rec;i++)
        {
        	s1[i].display();
        }
    		    
		
	}

}
