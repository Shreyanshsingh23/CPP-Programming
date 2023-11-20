#include <iostream>
#include <math.h>
using namespace std;

// multiplication function

// 2. no return type with  argument

void mul(int a, int b){
    int c = a * b ;

    cout << c << endl;
}

int main (){

    int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    mul(a,b);

    return 0;

}