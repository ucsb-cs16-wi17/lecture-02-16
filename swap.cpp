
//Precondition: x and y contain valid memory locations
//Post condition: values pointed to by x and y are swapped
void swapValue(int *x, int *y){
    int tmp =*x;
    *x = *y;
    *y =tmp;
}


