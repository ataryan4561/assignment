import java.util.*;
public class assi_2_10 {
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        int n=scn.nextInt();
        int f=0;
        int s=1;
        int t=f+s;
        for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==0 && j==0)
            {
                System.out.print(f);
            }
            else if(i==1 && j==0)
            {
                System.out.print(s+" ");
                System.out.print(t);
            }
            else if(i==1 && j==1)
            {}
            else
            {
                f=s;
                s=t;
                t=f+s;
                System.out.print(t+" ");
            }
        }
        System.out.println();
    }
  }
}