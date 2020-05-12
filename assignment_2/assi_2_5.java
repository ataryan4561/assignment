import java.util.*;
public class assi_2_5
{
    public static Scanner scn= new Scanner (System.in);
    public static void main(String [] args)
    {
        int n=scn.nextInt();
        int f=0;
        int s=1;
        int t;
        if(n>=f)
        {
            System.out.print(f+" ");
        }
        if(n>=s)
        {
            System.out.print(s+" ");
        }
        t=f+s;
        while(n>=t)
        {
            System.out.print(t+" ");
            f=s;
            s=t;
            t=f+s;
        }
    }
}