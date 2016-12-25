//https://www.hackerrank.com/challenges/30-scope
//Author - Sajal Agrawal
//@sajal.agrawal1997@gmail.com

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
    
    	// Add your code here

    Difference(int[] a){
        elements=new int[a.length];
        elements=a;
        /*
        for(int i=0;i<a.length();i++)elements[i]=a[i];
        */
    }

    void computeDifference(){
        int i,j;
        maximumDifference=-99999;
        for(i=0;i<elements.length-1;i++){
            for(j=i+1;j<elements.length;j++){
                if(Math.abs(elements[i]-elements[j])>maximumDifference)maximumDifference=Math.abs(elements[i]-elements[j]);
            }
        }
    }
    
    } // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
