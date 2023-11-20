#include<iostream>
#include<math.h>
using namespace std;

// substraction function

//3.  return type with no argument

int subs(){
     int a,b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    int c = a - b;

    return c;

}



int main(){
 int answer =subs();   
 cout << answer << endl;
// return answer;
}