#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout << "Entrer the value" << endl;
cin >> n;
int answer = 1;
int i = 0;
while(n != 0){

int bit = n % 2;
n= n / 2;
cout << bit << endl;

 answer =  (bit * pow(10,i) ) + answer;

 i++;

// cout << answer << endl;

}

cout << "Answer is " << answer;
}