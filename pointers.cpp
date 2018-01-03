#include <iostream>
#include <cstdlib>
using namespace std;

class Pointers{
private:
    int *num1;
    int *num2;

public:
Pointers(){
num1=NULL;
num2=NULL;
}



void sumVar(int *a ){


while (*a!=0){

    cout<<*a;
    a++;

}


}







};


int main(){
int arr [6] = {1,2,3,4,5,0};
int *p1=arr;



Pointers pointer;
pointer.sumVar(arr);

system("PAUSE");

}
