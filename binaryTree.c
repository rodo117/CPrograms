#include <stdio.h>
#include <stdlib.h>


typedef struct node{
int data;
struct node * rigth;
struct node *left;
}Node;

Node *root = NULL;


Node* insert(Node *leaf,int num){
    if (root==NULL){
      Node *leaf = (Node *)malloc(sizeof(Node));
      leaf->data=num;
      leaf->rigth=NULL;
      leaf->left=NULL;
      root=leaf;
      printf("This is the root value %d\n",root->data);
    }else{
        if(leaf==NULL){
          leaf = (Node *)malloc(sizeof(Node));
          leaf->data=num;
          leaf->rigth=NULL;
          leaf->left=NULL;
          printf("este es el valor de la hoja %d\n",leaf->data);
        }else{
           if( num<leaf->data){
            printf("recorriendo hacia la izquierda\n");
            leaf->left = insert (leaf->left,num);
           }else if( num>leaf->data){
            printf("recorriendo hacia la derecha\n");
            leaf->rigth = insert (leaf->rigth,num);
           }

        }
      return leaf;
    }

}



void preOrden(Node *leaf){

    if(leaf!=NULL){
       printf("%d\n",leaf->data);
             preOrden(leaf->left);
             preOrden(leaf->rigth);
    }
}


void inOrden(Node *leaf){

    if(leaf!=NULL){
        inOrden(leaf->left);
        printf("%d\n",leaf->data);
        inOrden(leaf->rigth);
    }

}


void postOrden(Node *leaf){

   if(leaf!=NULL){
     postOrden(leaf->left);
     postOrden(leaf->rigth);
     printf("%d\n",leaf->data);
   }

}


int main(){
int optChoosed;
int num;

do{
printf("1.- Insertar dato\n");
printf("2.-Recorridos\n");
scanf("%d",&optChoosed);
switch(optChoosed){
 case 1:
  printf("Dame el dato a insertar\n");
  scanf("%d",&num);
  insert(root,num);
 break;
 case 2:
 printf("Pre-Orden\n");
 preOrden(root);
 printf("In-Orden\n");
 inOrden(root);
 printf("Post-Orden\n");
 postOrden(root);
 break;

}

}while(optChoosed!=6);

return 0;

}
