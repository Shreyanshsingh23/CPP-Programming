#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the value" << endl;
    cin >> n;

    int i =0;
    double answer = 0;

    while( n != 0){
        int bit = n & 1;
        
        answer = (bit * pow(10,i) ) + answer;

        n = n >> 1;

        i++;

    }

    cout << "Answer is " << answer << endl;

}