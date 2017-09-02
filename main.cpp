#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
//    cout<< endl;
    printf("\n");
//    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    printf("The factorial of 5 is %d\n", factorial(5));
    return 0;
}
