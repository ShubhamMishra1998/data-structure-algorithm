package com.shubham.recursion;

public class MaxOfArray {
    static int maxOfArray(int[] a, int i,int n) {
        if(i==n) {
            return Integer.MIN_VALUE;
        }

        int mx = maxOfArray(a,i+1,n);
        return Math.max(mx, a[i]);
    }
    public static void main(String[] args) {
        int[] a = {5,1,4,1,4,7,3,9,2,1};
        System.out.println(maxOfArray(a,0,a.length));

    }
}
