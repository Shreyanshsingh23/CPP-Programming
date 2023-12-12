#include <iostream>
using namespace std;

class Human{
    public:

    int age;
    int weight;
    Human(){
      this->age =0 ;
      this->weight=50 ;

    }


};
int* a = new ;

int main(){

    Human Ram = new Human();

    cout << Ram.age << endl;
    cout << Ram.weight<< endl;

}

// int main(){

//     Human 
//     return 0;
// }