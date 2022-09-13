import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner input= new Scanner(System.in);
        
        int intg = input.nextInt();
        double doub = input.nextDouble();
        
        input.nextLine();
        
        String str = input.nextLine();
        
        System.out.println("String: " + str);
        System.out.println("Double: " + doub);
        System.out.println("Int: " + intg);
    }
}
