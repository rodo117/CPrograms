
package binarytree;

import java.util.Scanner;

public class BinaryTree {

    Leaf root = null;
    
     class Leaf {
        
        int data;
        Leaf left = null;
        Leaf right = null;
        
        public Leaf (int data) {
        this.data = data;
        }
    
    }
    
   public Leaf insert (Leaf leaf, int number) {
       if(root==null){
          leaf = new Leaf(number);
          root = leaf;
          System.out.println("This is the root of the tree"+root.data);
       }else {
        if(leaf==null){
            leaf = new Leaf(number);
            System.out.println("This is the value of the leaf"+leaf.data);
            }
        else {
            if(number<leaf.data){
            System.out.println("moving to Left");
            leaf.left = insert(leaf.left,number);
            }
            else {
             System.out.println("moving to Right");
             leaf.right= insert(leaf.right,number);
            }
        }
      }  
        return leaf;
   } 
   
   public void preOrden (Leaf leaf) {
    if(leaf != null){
         System.out.println(leaf.data);
         preOrden(leaf.left);
         preOrden(leaf.right);
       }
   
   }
   
   
   public void inOrden (Leaf leaf) {
    if(leaf != null){
         inOrden(leaf.left);
         System.out.println(leaf.data);
         inOrden(leaf.right);
       }
   
   }
   
   public void postOrden (Leaf leaf) {
    if(leaf != null){
         postOrden(leaf.left);
         postOrden(leaf.right);
         System.out.println(leaf.data);
       }
   
   }
   
    
    public static void main(String[] args) {
        BinaryTree tree =  new BinaryTree();
        Scanner reader = new Scanner(System.in);
        do {
        System.out.println("Elige una opcion");
        System.out.println("1.- Insertar Datos");
        System.out.println("2.- Recorridos");
        
        int option = reader.nextInt();
        switch(option) {
        
            case 1: 
                System.out.println("Dame el numero a insertar");
                int number = reader.nextInt();
                 tree.insert(tree.root, number); 
                break;
                
            case 2: 
                System.out.println("Recorriendo el arbol Pre-Orden\n");
                tree.preOrden(tree.root);
                
                System.out.println("Recorriendo el arbol In-Orden\n");
                tree.inOrden(tree.root);
                
                System.out.println("Recorriendo el arbol Post-Orden\n");
                tree.postOrden(tree.root);
                break;
        }
    
        }while(true);
    }
    
}
