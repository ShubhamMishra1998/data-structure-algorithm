package com.shubham.recursion;

import java.util.Scanner;

public class PrintIncreasingDecreasing {
    static void printIncreasing(int n) {
        if(n==0) return;
        printIncreasing(n-1);
        System.out.println(n);
    }

    static void printDecreasing(int n) {
        if(n==0) return;
        System.out.println(n);
        printDecreasing(n-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        printIncreasing(n);
        System.out.println("------------------------------------------");
        printDecreasing(n);
    }
}
