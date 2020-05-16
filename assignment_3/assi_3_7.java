import java.util.*;
public class assi_3_7 {
    public static Scanner scn = new Scanner (System.in);
    public static void main(String [] args)
    {
        int x=scn.nextInt();
        System.out.print(floorSqrt(x));
    }
    public static int floorSqrt(int x) 
    {	 
        if (x == 0 || x == 1) 
        {
        return x; 
        }
        int start = 1, end = x;
        int ans=0;
        while (start <= end) 
        {		 
            int mid = (start + end) / 2; 
            if (mid*mid == x) 
                return mid; 
            if (mid*mid < x) 
            { 
                start = mid + 1; 
                ans = mid; 
            } 
            else
                end = mid-1; 
        } 
        return ans;
    } 
}