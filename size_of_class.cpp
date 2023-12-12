#include <iostream>
using namespace std;

class Animal{
   public:

  // int age; // 4 byte we know

  // int weight; // 4 byte we know

   char ch; // 1 byte we know
   
  // char cha; // 1 byte we know

};

int main(){
    // cout << "Size of the age integer = " << sizeof(age) << endl;
    // cout << "SIze of the weight = " << sizeof(weight) << endl;
    cout << "Size of the class = " << sizeof(Animal) << endl;
  
 }
