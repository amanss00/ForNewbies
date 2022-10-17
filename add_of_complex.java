import java.util.Scanner;
public class Complex01 {

	private int real1,img1,real2,img2;
	private int real3,img3;

	public void getdata()
	{
		Scanner obj = new Scanner(System.in);

		System.out.println("Enter First Complex Number :");
		real1 = obj.nextInt();
		img1 = obj.nextInt();

		System.out.println("Enter Second Complex NUmber :");
		real2 = obj.nextInt();
		img2 = obj.nextInt();

	}
	public void add()
	{
		real3 = real1 + real2;
		img3 = img1 + img2;

	}
	public void display()
	{
		System.out.println("First Complex Number is :" +real1+ "+" +img1+ "i");
		System.out.println("Second Complex Number is :" +real2+ "+" +img2+ "i");


		System.out.println("The Addition of Numbers is :" +real3+ "+" +img3+ "i");

	}



}



//File 2 :- 


public class Complex_01 {

	public static void main(String[] args) {
	
		Complex01 obj = new Complex01();
		
		obj.getdata();
		obj.add();
		obj.display();

	}

}
