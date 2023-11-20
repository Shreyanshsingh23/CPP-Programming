#include <iostream>
#include <math.h>
using namespace std;

// multiplication function

// 4. return type with  argument

int mul(int a , int b){

    int c = a * b;

    return c;

}

int main(){

    int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    int answer = mul(a,b);

    // return answer;
    
    cout << answer << endl;

}
