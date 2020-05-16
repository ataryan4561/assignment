import java.util.*;
public class assi_3_3 {
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        int x=scn.nextInt();
        int n=scn.nextInt();
        int ans=power(x,n);
        System.out.print(ans);
    } 
    public static int power(int x,int n)
    {
        int x1=x;
        while(n!=1)
        {
            n--;
            x=x*x1;
            // System.out.println(x);
        }
        return x;
    }
}