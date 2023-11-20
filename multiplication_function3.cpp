#include <iostream>
#include <math.h>
using namespace std;

// multiplication function

// 3. return type with no argument

int mul(){
    int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
     int c = a * b;

     return c;

}

int main(){

    int answer = mul();

    cout << answer << endl;

    return 0;
    
}