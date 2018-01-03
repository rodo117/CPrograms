#include <stdio.h>
#include <stdlib.h>


typedef struct nodo{
int data;
struct nodo *sig;
}Node;

Node *raiz=NULL,*fin=NULL;

void insertNode(int num,Node * node ){

      if(raiz==NULL){
        raiz=node;
        fin=node;
        node->data=num;
        node->sig=NULL;
      }else{
        fin->sig=node;
        node->data=num;
        node->sig=NULL;
        fin=node;
      }


}



void print_list(Node *raiz){

   Node *current=raiz ;

   while(current!=NULL){
    printf("%d\n",current->data);
    current=current->sig;
   }




}


void findData(Node *raiz,int data){

Node *current =raiz;
int count=0;
while(current!=NULL){
    if(current->data==data){
     printf("data found in node %d\n",count+1);
    }
    current=current->sig;
    count++;
}
}


int main(){

int optChoosed,num;

do {


printf("1.-insertar un dato\n");
printf("2.-recorrer la lista\n");
printf("3.-buscar dato\n");
printf("6.-salir\n");

scanf("%d\n",&optChoosed);

switch (optChoosed){

    case 1:
     printf("Dame el dato  a insertar");
     scanf("%d",&num);
     Node *node=(Node *)malloc (sizeof(Node ));
     insertNode(num,node);
    break;

    case 2:
    print_list(raiz);
    break;

    case 3:
    printf("dame el numero a buscar ");
    scanf("%d",&num);
    findData(raiz,num);

    break;

}
}while(optChoosed!=6);



return 0;
}
