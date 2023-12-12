#include<iostream>
#include<math.h>
using namespace std;

void peri(int r){

    int perimeter = 2 * 3.14 * r ;

    cout << " Perimeter is " << perimeter << " cm" << endl;

}

void ar(int r){

    int area = 3.14 * pow(r,2);
    cout << "Area is " << area << " cm" << endl;
}

int main(){

    int r;
    cout << "Enter the radius of circle in centimetre" << endl;
    cin >> r;

    peri(r);
    ar(r);


}
