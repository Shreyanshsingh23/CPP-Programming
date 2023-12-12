#include <iostream>
#include <math.h>
using namespace std;

void func(int n){
  int a = 2;
    
    for(a=2;a<n -1; a++){

        if(n%a== 0){
            cout<<"not prime"<<endl;
            return;
        }
    }
    cout << " prime no." << endl;

}

int main(){

int n;
cout << "Enter the number" << endl;
cin >> n;

func(n);

}
