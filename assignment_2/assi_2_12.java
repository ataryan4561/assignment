import java.util.*;
public class assi_2_12 
{
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        int rows=scn.nextInt();
        int nst=(rows/2)+1;
        int nsp=1;
        for(int r=1; r<=rows; r++)
        {
            for(int cst=1; cst<=nst; cst++)
            {
                System.out.print("*");
            }
            for(int csp=1; csp<=nsp; csp++)
            {
                System.out.print(" ");
            }
            for(int cst=1; cst<=nst; cst++)
            {
                System.out.print("*");
            }
            if(r<(rows/2)+1)
            {
                nst--;
                nsp=nsp+2;
            }
            if(r>=(rows/2)+1)
            {
                nst++;
                nsp=nsp-2;
            }
            System.out.println();
        }
    }
}