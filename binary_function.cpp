#include<iostream>
#include<math.h>
using namespace std;
int binary(){

     int n;
   cout << "Enter the number " << endl;
   cin >> n;

     int  i = 0;

   double answer = 0;
   while(n != 0){

    int bit = n & 1;

    answer = (bit * pow(10,i) ) + answer;

    n = n>> 1;
     
    i++;
}

return answer;
}
int main(){
   
//    int n;
//    cout << "Enter the number " << endl;
//    cin >> n;
   
   
//    while(n != 0){

    // int bit = n & 1;

    // answer = (bit * pow(10,i) ) + answer;

    // n = n  >> 1;

    // i++;

    double bin = binary();

    cout << bin << endl;


   }

//    cout << "Answer is " << answer << endl;





 



