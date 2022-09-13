import java.io.*;
import java.util.*;
import java.lang.Math;

public class Solution {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int q, n, a, b; 
        q = input.nextInt();
        
        for(int k = 0 ; k < q ; k++)
        {
            a = input.nextInt();
            b = input.nextInt();
            n = input.nextInt();
            for(int i = 0 ; i < n ; i++)
            {
                int res = a + ((int)Math.pow(2, 0) * b);
                
                for(int j = 1; j <= i ;j++)
                    res+= (int)Math.pow(2, j) * b;
                    
                System.out.print(res + " ");    
            }
            System.out.println();
        }
        
    }
}
