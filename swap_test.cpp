//swap_test.cpp
//Diba Mirza
//Program to illustrate call by address 

#include<iostream>
#include "swap.h"
using namespace std;


int main(){
    int a =25, b =20;
    cout<<"Values before call to swap : "<<a<<" "<<b<<endl;
    swapValue(&a,&b);
    cout<<"Values after call to swap  : "<<a<<" "<<b<<endl;
}
