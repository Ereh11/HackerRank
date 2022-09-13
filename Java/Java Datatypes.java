import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t;  t = input.nextInt();
        for(int i = 0 ; i  < t ; i++)
        {
            try
            {
                long tt = input.nextLong();
                System.out.println(tt + " can be fitted in:");
                
                if(tt == (byte)tt)
                    System.out.println("* byte");
                if(tt == (short)tt)
                    System.out.println("* short");
                if(tt == (int)tt)
                    System.out.println("* int");
                    
                System.out.println("* long");  
                 
            } 
             catch(Exception e)
            {
                System.out.println(input.next() + " can't be fitted anywhere.");
            }
        }
    }
}
