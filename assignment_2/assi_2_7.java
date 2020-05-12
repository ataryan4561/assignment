import java.util.*;
public class assi_2_7
{
public static Scanner scn = new Scanner (System.in);
public static void main(String [] args)
    {
        int n=scn.nextInt();
        int num=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
               System.out.print(num+" ");
               num=num+1;
            }
            System.out.println();
        }
    }
}