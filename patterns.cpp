#include<iostream>
using namespace std;
 
int main(){
int n;
cout << "Enter the value bro" << endl;
cin >> n ;
int k=1;
int row = 1 ;
while(row <=n){

    int col = 1 ;
    while(col <=n){
    cout << k+row+col-2 << "  " ;
   col = col + 1;
    }
    cout << endl;
row = row + 1;

}



return 0;

}