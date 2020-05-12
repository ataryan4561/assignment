import java.util.*;
public class assi_1_10 
{
    public static Scanner scn= new Scanner (System.in);
    public static void main(String [] args)
    {
        int x,y,z;
        x=scn.nextInt();
        y=scn.nextInt();
        z=scn.nextInt();
        if(x==y && x==z)
        {
            System.out.println("Equilateral Triangle");
        }
        else if((x==y && x!=z ) ||(x==z && x!=y) || (y==z && y!=x))
        {
            System.out.println("Isosceles Triangle");
        }
        else 
        {
            System.out.println("Scalene Triangle");
        }
    }
}