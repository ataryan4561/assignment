import java.util.*;
public class assi_2_9 
{
    public static Scanner scn = new Scanner (System.in);
    public static void main(String []args)
    {
        int n=scn.nextInt();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                System.out.print(combi(i,j)+" ");
            }
            System.out.println();
        }
    }    
    public static int fact(int n)
    {
        int fac=1;
        if(n==0)
        {
            return 1;
        }
        while(n!=1)
        {
            fac=fac*n;
            n=n-1;
        }
        return fac;
    }
    public static int combi(int n,int r)
    {
        return (fact(n)/(fact(n-r)*fact(r)));
    }
}