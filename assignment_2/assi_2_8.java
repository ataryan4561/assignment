import java.util.*;
public class assi_2_8
{
    public static Scanner scn= new Scanner (System.in);
    public static void main(String[] args)
    {
        int n=scn.nextInt();
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(j==1 || j==i)
                {
                    System.out.print(i+" ");
                }
                else 
                {
                    System.out.print(0+" ");
                }
            }
            System.out.println();
        }
    }
}