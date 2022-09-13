import java.io.*;
import java.util.*;

public class Solution {
    static Scanner input = new Scanner(System.in);
    static int a, b;
    static boolean ok = false;
    
        static
        {
            a = input.nextInt();
            b = input.nextInt();
            if(a > 0 && b > 0) ok = true;
        }
        
    public static void main(String[] args) {
       if(ok == false) 
          System.out.println("java.lang.Exception: Breadth and height must be positive");
       else 
          System.out.println( a * b );
    }
}
