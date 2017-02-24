//swap_point.cpp
//Diba Mirza
//Program to illustrate call by address 

#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

//Precondition: x and y contain valid memory locations
//Post condition: values pointed to by x and y are swapped
//Passing integers by address
void swapValue(int *x, int *y){
    int tmp =*x;
    *x = *y;
    *y =tmp;
};

//Passing structs to functions by reference
void swapPoints(struct Point &p1, struct Point &p2){
    struct Point tmp =p1;  //copies the entire content of p1 into tmp
    p1 = p2;
    p2 = tmp;
};

//Passing structs to functions by address
void swapElements(struct Point *ptr){  
    int tmp =(*ptr).x; //same as tmp = ptr->x;
    ptr->x = ptr->y;
    ptr->y =tmp;

};

//Passing arrays of structs to functions
//Notice how array degenerates to pointer
//Refer back to in class code done in lecture 9
void printPoints(struct Point *pArr, int len){
    cout<<"Printing elements of an array of structs"<<endl;
    for(int i=0; i<len;i++) {//Iterate through the array using a for loop
        cout<<"XY values of element "<<i<<" :"<<pArr[i].x<<" "
            <<pArr[i].y<<endl;
    }
}

int main(){
    struct Point p, q;
    struct Point pointArray[3]; //Declaration of array of structs
    pointArray[0]= {10, 20}; // Initialize each element of the array
    pointArray[1]= {40, 50}; // This is a C++11 feature
    pointArray[2]= {60, 70}; // This is a C++11 feature
    p.x = 25;
    p.y = 20;

    q.x = 45;
    q.y = 50;
    cout<<"XY Values of struct P : "<<p.x<<" "<<p.y<<endl;
    swapElements(&p);
    cout<<"Call by address: swapElements(&P)"<<endl;
    cout<<"XY Values of struct P : "<<p.x<<" "<<p.y<<endl;
    cout<<endl;

    cout<<"XY Values of struct P : "<<p.x<<" "<<p.y<<endl;
    cout<<"XY Values of struct Q : "<<q.x<<" "<<q.y<<endl;

    swapPoints(p, q);
    cout<<"Call by reference: swapPoints(P,Q)" <<endl;
    cout<<"XY Values of struct P : "<<p.x<<" "<<p.y<<endl;
    cout<<"XY Values of struct Q : "<<q.x<<" "<<q.y<<endl;
    cout<<endl;

    cout<<"Passing arrays of structs to functions: printPoints(pointArray,3)" <<endl;
    printPoints(pointArray, 3);
}
