import java.util.*;
public class assi_2_11
{
    public static Scanner scn = new Scanner(System.in); 
    public static void main(String [] args)
    {
        int rows=scn.nextInt();
        int nst=1;
        int nsp=(rows/2);
        for(int r=1; r<=rows; r++)
        {
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
                nst=nst+2;
                nsp--;
            }
            if(r>=(rows/2)+1)
            {
                nst=nst-2;
                nsp++;
            }
            System.out.println();
        }
    }
}