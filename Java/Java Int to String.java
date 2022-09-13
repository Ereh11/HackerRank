import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner input =  new Scanner(System.in);
        int n; n = input.nextInt();
        
        if(n <= 100 && n >= -100)
            System.out.print("Good job");
        else
            System.out.print("Wrong answer");
    }
}
