package com.shubham.recursion;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PrintEncodings {
    static void printEncodings(String s1, String s2) {
        if(s1.isEmpty()) {
            System.out.println(s2);
            return;
        }
        if(s1.charAt(0) == '0') return;

        int charValue = s1.charAt(0)-'0';
        char ch = (char)((charValue-1)+'a');
        printEncodings(s1.substring(1),s2+ch);
        if(s1.length()>1) {
            int value = Integer.parseInt(s1.substring(0,2));
            if(value<27) {
                char chValue = (char)((value-1)+'a');
                printEncodings(s1.substring(2),s2+chValue);
            }
        }


    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        printEncodings(s1,"");

    }
}
