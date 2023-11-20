#include<iostream>
#include<math.h>
using namespace std;

// substraction function

//2. no return type with argument

void subs(int a, int b){
   
    int c = a - b;

    cout << c << endl;

}



int main(){

 int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

subs(a,b);

return 0;
}


