//https://www.hackerrank.com/challenges/30-binary-trees
//Author - Sajal Agrawal
//@sajal.agrawal1997@gmail.com

import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class Solution{
    static void levelOrder(Node root){
      //Write your code here
      int i=1;
      for(;i<=height(root);i++){
          displayGivenLevel(root,i);
      }
    }

    static void displayGivenLevel(Node root,int level){
        if(root==null)return;
        if(level==1)
            System.out.print(root.data+" ");
        else{
            displayGivenLevel(root.left,level-1);
            displayGivenLevel(root.right,level-1);
        }
    }

    static int height(Node root){
        if(root==null)return 0;
        return (1+Math.max(height(root.left),height(root.right)));
    }
    public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}
