import java.util.*;
public class assi_3_4
{
    public static boolean prime(int x)
    {
        for(int i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                return true;
            }
        }
        return false;
    }
    public static Scanner scn= new Scanner (System.in);
    public static void main(String [] args)
    {
        int x=scn.nextInt();
        boolean res=prime(x);
        if(res==false)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}