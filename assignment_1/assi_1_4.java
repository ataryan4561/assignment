import java.util.*;
public class assi_1_4 
{
    public static Scanner scn = new Scanner (System.in);
    public static void main(String[] args)
    {
        int x=scn.nextInt();
        if(x%5==0 && x%11==0)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
}