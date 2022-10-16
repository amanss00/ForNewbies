import java.util.Scanner;

abstract class Shape {

    protected double x,y;

   /* public void getdata()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("ENTER THE VALUE OF X =  ");
        x = sc.nextDouble();

        System.out.println("ENTER THE VALUE OF Y =  ");
        y = sc.nextDouble();

    }; */

    public abstract void compute_area();
}

 class Triangle extends Shape {

    public void getdata()
    {
        Scanner sc =new Scanner(System.in);

        System.out.println("ENTER THE BASE LENGTH =  ");
        x = sc.nextDouble();
        System.out.println("ENTER THE HEIGHT =  ");
        y = sc.nextDouble();
    }
    public void compute_area()
    {
        double area;

        area = (0.5 * x * y);
        System.out.println("THE AREA OF TRIANGLE IS =  " + area);
    }


}

 class Rectangle extends Shape {

    public void getdata()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("ENTER THE LENGTH OF RECTANGLE =  ");
        x = sc.nextDouble();
        System.out.println("ENTER THE BREADTH OF RECTANGLE = ");
        y = sc.nextDouble();
    }
    public void compute_area()
    {
        double area;

        area = (x * y);
        System.out.println("THE AREA OF RECTANGLE IS =  " + area);
    }
}

class Circle extends Shape {

    public void getdata()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("ENTER THE RADIUS OF CIRCLE =  ");
        x = sc.nextDouble();
    }
    public void compute_area()
    {
        double area;

        area = (3.14 * x * x);
        System.out.println("THE AREA OF CIRCLE IS =  " + area);
    }}

 class area {

    public static void main(String args [])
    {
        Scanner sc = new Scanner(System.in);
        int n;
        do {


            System.out.println("ENTER WHICH FIGURE AREA YOU WANT TO FINDOUT =  ");
            System.out.println("1.TRIANGLE");
            System.out.println("2.CIRCLE");
            System.out.println("3.RECTANGLE");
            System.out.println("4.EXIT");

            n = sc.nextInt();

            switch (n)
            {
                case 1:
                {
                    Triangle t = new Triangle();
                    t.getdata();
                    t.compute_area();
                }break;

                case 2:
                {
                    Circle c = new Circle();
                    c.getdata();
                    c.compute_area();
                }break;

                case 3:
                {
                    Rectangle r = new Rectangle();
                    r.getdata();
                    r.compute_area();
                }break;
            }
        }while (n!=4);
    }
}
