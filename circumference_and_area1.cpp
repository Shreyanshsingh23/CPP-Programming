#include<iostream>
#include<math.h>
using namespace std;

float peri(int r){

    int perimeter = 2 * 3.14 * r;

    return perimeter;
}

float ar(int r){

    int area = 3.14 * pow(r,2);

     return area;
}

int main(){

    int r;
    cout << "Enter the radius in centimetre " << endl;
    cin >> r;

    int n = peri(r);
    int k = ar(r);
cout << "Perimeter is " << n << " cm" << endl;
cout << "Area is " << k << " cm" << endl;
}