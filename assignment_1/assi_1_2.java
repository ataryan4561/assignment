import java.util.*;
public class assi_1_2 
{
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args)
    {
        int x=scn.nextInt();
        int y=scn.nextInt();
        int z=scn.nextInt();
        if(x>y && x>z)
        {
            System.out.println(x);
        }
        else if(y>x && y>z)
        {
            System.out.println(y);
        }
        else
        {
            System.out.print(z);
        }
    }
}