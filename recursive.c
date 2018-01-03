#include <stdio.h>
#include<string.h>



int decimalToBinary(int numero){

   if(numero>=1){

   decimalToBinary(numero/2);

    printf("%d\n",numero%2);

   }

}

int factorial(int numero){

if(numero>1){

return  numero *(factorial(numero-1));

}else return 1;



}


int main (){
int numero ;
printf("Dame un numero\n");
scanf("%d",&numero);

char str []="Rodolfo";
decimalToBinary(numero);
printf("%d",factorial(numero));

return 0;
}
