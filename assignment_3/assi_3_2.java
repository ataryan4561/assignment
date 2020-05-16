import java.util.*;
public class assi_3_2 {
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        char c = scn.next().charAt(0);
        int res = restochar(c);
        if(res==1)
        {
            System.out.print("Upper Case");

        }
        if(res==0)
        {
            System.out.print("Lower Case");
        }
    }
    public static int restochar(char ch)
    {
        int ch1=ch;
        // System.out.print(ch1);
        if(ch1>=65 && ch1<=90)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}