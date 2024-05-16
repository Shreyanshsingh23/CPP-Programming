#include<iostream>
using namespace std;

class task{
    private:
    char name[50];
    int date;
    char priority[50];


    public:
    
    task();
    void display ();
    
};

task :: task(){
    cout << "Enter the name of the task : " ;
    cin >> name;
    cout << endl;
    cout << "Enter the date : " ;
    cin >> date;
     cout << endl;
    cout << "What's the priority ? ";
    cin >> priority;
     cout << endl;

   display();

}

   void task :: display(){
    cout << "The task is " << name << "ing " << "which is going to take place on " << date << "th " << "whose priority is " << priority << endl;

   }

int main(){
    task coding;
    
    return 0;

}