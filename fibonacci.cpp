#include<iostream>
using  namespace std;
int main(){
int n;
cout << "Enter the number of terms" << endl;
cin>> n;
int i= 1;
int a =0;
int b= 1;
int next_term = 0;
cout << a<< "," <<b<< ",";
while(i<=n){
    next_term= a +b;
a=b;
i++;
// next_term= a +b;
// a=b;
b= next_term;
cout << next_term<< ",";

}

}