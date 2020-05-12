import java.util.*;
public class assi_1_9 
{
    public static Scanner scn =new Scanner(System.in);
    public static void main(String [] args)
    {
        int x=scn.nextInt();
        int y=scn.nextInt();
        int z=scn.nextInt();
        if(x+y>z || y+z>x || z+x>y)
        {
            System.out.println("Triangle Possible");
        }
        else 
        {
            System.out.println("Triangle Is Not Possible");
        }
    }
}