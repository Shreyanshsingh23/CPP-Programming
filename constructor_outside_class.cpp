#include<iostream>
using namespace std;

class student {
    private:
    int roll_no;
    char name [50];
    float marks;

    public :

    student() ; // defining constructor
    
    void display(); // member function to access private data members


};

student :: student() {
    cout << "Enter the roll no. :" <<endl;
    cin >> roll_no;
    cout << "Enter the name :" <<endl;
    cin >> name;
    cout << "Enter the marks :" <<endl;
    cin >> marks;
}

void student :: display(){
    cout << "Roll No. :" << roll_no << endl;
    cout << "Name :" << name << endl;
    cout << "Marks : " << marks << endl;
}

// now will create an object in main function

int main() {
    student shreyansh ;
    shreyansh.display();
    

    return 0;
}