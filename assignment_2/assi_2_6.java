import java.util.*;
public class assi_2_6 
{
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        int n=scn.nextInt();
        int f=0;
        int s=1;
        int t=f+s;
        for(int i=2; i<n; i++)
        {
            System.out.print(t+" ");
            f=s;
            s=t;
            t=f+s;
        }
    }
}