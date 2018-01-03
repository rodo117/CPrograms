#include <iostream>
using namespace std;

class Pointers{
private:
    int *num1;
    int *num2;

Pointers(){
num1=NULL;
num2=NULL;
}



void sumVar(int *a , int *b){



}







};


int main(){
int a,b;
int *p1,*p2;

cout<<"Dame un numero"<<endl;
cin>>a;
cout<<"Dame otro numero"<<endl;
cin>>b;

*p1=a;
*p2=b;


Pointers pointer;
pointer.sumVar(p1,p2);

}
