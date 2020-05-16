import java.util.*;
public class assi_2_13 
{
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        int rows=scn.nextInt();
        int nsp=rows-1;
        int nst=1;
        for(int r=1; r<=rows; r++)
        {
            int num=0;
            for(int csp=1; csp<=nsp; csp++)
            {
                System.out.print(" ");
            }
            for(int cst=1; cst<=nst; cst++)
            {
                if(cst<=(nst/2))
                {
                    System.out.print(r+num);
                    num++;
                }
                if(cst>(nst/2))
                {
                    System.out.print(r+num);
                    num--;
                }
            }
            System.out.println();
            nsp--;
            nst=nst+2;
        }
    }
}