import java.util.*;
public class assi_1_6 {
    public static Scanner scn=new Scanner(System.in);
    public static void main(String [] args)
    {
        char ch;
        ch=scn.next().charAt(0);
        int x=ch;
        if(x>=65 && x<=90)
        {
            System.out.println("U");
        }
        else 
        {
            System.out.println("L");
        }
    }
}