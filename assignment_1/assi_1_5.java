import java.util.*;
public class assi_1_5 
{
    public static Scanner scn =new Scanner(System.in);
    public static void main(String [] args)
    {
        int x=scn.nextInt();
        if(x%4==0 && x%400==0 && x%100!=0)
        {
            System.out.println("Leap Year");
        }
        else if(x%4==0 && x%400==0 && x%100!=0)
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not A Leap Year");
        }
    }
}