import java.util.Scanner;

public class circumference_area_java{

   static void Peri(int r){
    double perimeter = (2*3.14*r) ;
    System.out.println("Perimeter is: " +  perimeter);
}    
   
   static double ar(int r){

    double area = 3.14*r*r;

    return area;
   } 

  

    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Please enter the radius of the circle ");
    int r = sc.nextInt();
    
    Peri(r);
     double x = ar(r);

     System.out.println(x);
     
     circumference_area_java circle1 = new circumference_area_java();
    System.out.println("Enter the radius of Circle 1");
    int r1 = sc.nextInt();

     Peri(r1);

     double y = ar(r1);

     System.out.println(y);

     System.out.println("Thanks for using :) ");
    

    }

    

  
}