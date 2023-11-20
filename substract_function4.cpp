#include<iostream>
#include<math.h>
using namespace std;

// substraction function

//4.  return type with  argument

int subs(int a, int b){
    int c = a -b;
     
     return c;
}




int main(){
    int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

   int answer =  subs(a,b);

   cout << answer << endl;
}