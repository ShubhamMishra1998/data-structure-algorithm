package com.shubham.recursion;

import java.util.Scanner;

public class CalculatePower {
   static int calulateLinearPower(int x, int n) {
        if(n==0)return 1;
        return x * calulateLinearPower(x,n-1);

    }

    static int calculatePowerLograthmicTime(int x,int n) {
        if(n==0) return 1;
        if(n%2==0) {
            int res = calculatePowerLograthmicTime(x,n/2);
            return res * res;
        }else{
            return x*calculatePowerLograthmicTime(x,n-1);
        }
    }

    static int calculatePowerIterative(int x,int n) {
        int res = 1;
        while(n>0) {
            if(n%2==1) {
                res = res * x;
            }
            x = x*x;
            n/=2;
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();

        System.out.println(calculatePowerLograthmicTime(x,n));

    }
}
