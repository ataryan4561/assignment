import java.util.*;
public class assi_2_4
{
    public static Scanner scn = new Scanner (System.in);
    public static void main(String[] args)
    {
        int n=scn.nextInt();
        int n1=n;
        int sum_o=0;
        int sum=0;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        while(n1!=0)
        {
            sum_o=sum_o+n1%10;
            n1=n1/100;
        }
        System.out.print("Even = ");
        System.out.print(sum-sum_o);
        System.out.println();
        System.out.print("Odd = ");
        System.out.print(sum_o);
        System.out.println();
    }
}