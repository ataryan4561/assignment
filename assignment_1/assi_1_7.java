import java.util.*;
public class assi_1_7 
{
    public static Scanner scn=new Scanner(System.in);
    public static void main(String [] args)
  {
    int x;
    x=scn.nextInt();
    if(x<8 && x%2!=0)
    {
        System.out.println(31);
    }
    else if(x<8 && x%2==0 && x!=2)
    {
        System.out.println(30);
    }
    else if(x==2)
    {
        System.out.println(28);
    }
    else if(x>=8 && x%2==0)
    {
        System.out.println(31);
    }
    else 
    {
        System.out.println(30);
    }
  }
}