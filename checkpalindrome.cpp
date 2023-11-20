#include<iostream>
#include<math.h>
using namespace std;
int main(){

//   int x;
//   cout << "Enter the value" << endl;
//   cin >> x;

//   int n,rev,i = 0;
//     while(x != 0){
//        n= x % 10;
//        cout << n<< endl;
//        rev = (n * pow(10,i) )+ rev ;
//        cout << rev << endl;
//        x = x / 10;
//        cout << x << endl;
//        i ++;
//        cout << i << endl;
//     }
 

//  cout << rev << endl;


int n;
cout << "Enter the value" << endl;
cin >> n;
int i, ans=0;
while(i != 3){
      ans = (n * pow(10,i) ) + ans;
      cout << ans << "  " << i ;
      i++;
}


}