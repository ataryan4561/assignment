import java.util.*;
public class assi_3_8 
{
    public static Scanner scn=new Scanner (System.in);
        public static void main(String [] args)
    {
            int n=scn.nextInt();
            int[] arr = new int[20];
            while(n!=0)
            {
                int g=n%10;
                arr[g]++;
                n=n/10;
            }
        for(int i=0; i<10; i++)
        {
            System.out.print(i+"= ");
            System.out.print(arr[i]);
            System.out.println();
        }
    }
}