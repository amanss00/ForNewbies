abstract class Shape
{
    void numberOfSides(){};
}   
class Rectangle extends Shape
{
   void numberOfSides()
   {
       System.out.println("Rectangle contains 4 sides.");
   }
}
class Triangle extends Shape
{
    void numberOfSides()
    {
        System.out.println("Traingle contains 3 sides.");
    }
}
class Hexagon extends Shape
{
    void numberOfSides()
    {
        System.out.println("Traingle contains 6 sides.");
    }
}
public class Shapes
{
    public static void main(String[] args) {

    Rectangle r=new Rectangle();
    Triangle t=new Triangle();
    Hexagon h=new Hexagon();
    r.numberOfSides();
    t.numberOfSides();
    h.numberOfSides();
}
}
