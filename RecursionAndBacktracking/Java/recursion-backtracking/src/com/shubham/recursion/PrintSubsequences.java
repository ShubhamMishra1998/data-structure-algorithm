package com.shubham.recursion;

import java.util.Scanner;

public class PrintSubsequences {

    static void printSubsequences(String s1, String s2) {
        if(s1.isBlank()) {
            System.out.println(s2);
            return;
        }
        char ch = s1.charAt(0);
        String restOfString = s1.substring(1);
        printSubsequences(restOfString, s2+ch);
        printSubsequences(restOfString, s2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        printSubsequences(s1,"");

    }
}
