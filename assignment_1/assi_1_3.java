import java.util.*;
public class assi_1_3 {
    public static Scanner scn =new Scanner(System.in);
    public static void main(String [] args)
    {
        int x=scn.nextInt();
        if(x>0)
        {
            System.out.println("Positive");
        }
        else if(x<0)
        {
            System.out.println("Negative");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}