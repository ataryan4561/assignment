import java.util.*;
public class assi_2_3 
{
    public static Scanner scn =new Scanner(System.in);
    public static void main(String[] args)
    {
        int n=scn.nextInt();
        while(n!=0)
        {
            System.out.print(n%10);
            n=n/10;
        }
    }
}