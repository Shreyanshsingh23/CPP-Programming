#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n){

    int a = 2;
    
    for(a=2;a< n-1; a++){

        if(n%a == 0){
            
            return false;
        }
    }
     return true;
}

 int main(){

    int n ;
    cout << "Enter the value" << endl;
    cin >> n;

    int abc = isprime(n);

  if(abc == 0){
    cout << "not prime" << endl;
  }
  else {
    cout << "Prime no." << endl;
    
  }
 }