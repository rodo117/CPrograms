#include <stdio.h>


int main (){

char myArray[]="hola";
char * myPointer=myArray;

  while(*myPointer!= '\0'){
   printf("imrpime %c \n",*myPointer);
   myPointer++;
   }

return 0;

}

