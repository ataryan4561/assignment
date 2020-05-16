import java.util.*;
public class assi_3_1
{
    public static Scanner scn = new Scanner(System.in);
    public static void main(String [] args)
    {
        int f=scn.nextInt();
        double ans=ftoc(f);
        System.out.println(ans);
    }
    public static double ftoc(int f)
    {
        return (5/9.0)*(f-32);
    }
}