#include <iostream>
#include <math.h>
using namespace std;

// multiplication function

// 1. no return type with no argument

void mul(){
    int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    int c = a * b;

    cout << c << endl;
}

int main(){

    mul();

}