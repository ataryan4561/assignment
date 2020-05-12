import java.util.*;
public class assi_1_8 
{
    public static Scanner scn =new Scanner(System.in);
    public static void main(String [] args)
  {
    int x=scn.nextInt();
    int count=0;
    if(x/2000!=0)
    {
        count=count+(x/2000);
        x=x-((x/2000)*2000);
    }
    if(x/500!=0)
    {
        count=count+(x/500);
        x=x-((x/500)*500);
    }
    if(x/100!=0)
    {
        count=count+(x/100);
        x=x-((x/100)*100);
    }
    if(x/50!=0)
    {
        count=count+(x/50);
        x=x-((x/50)*50);
    }
    System.out.println(count);
  }
}