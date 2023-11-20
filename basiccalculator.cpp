#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n1,n2,ch;
    cout << "1) Addition        2) Substraction"<<endl;
    cout << "3) Multiplication  4) Division"<<endl;
    cout <<"Enter the choice:  "<<endl;
    cin>> ch;

    switch(ch){
        case 1: {
            cout<<"Enter two numbers: ";
            cin>> n1 >> n2;
            double d= n1+n2;
            cout<< "sum="<< d<<endl;
            break;

        }

        case 2: {
           cout<<"Enter two numbers: ";
            cin>> n1 >> n2;
            double d1= n1-n2;
            cout<< "difference="<< d1<<endl;
            break;

        }
        
        case 3: {
           cout<<"Enter two numbers: ";
            cin>> n1 >> n2;
            double d2= n1*n2;
            cout<< "multiplication="<< d2<<endl;
            break;
      
        }
        
        case 4: {
           cout<<"Enter two numbers: ";
            cin>> n1 >> n2;
            double d3= n1/n2;
            cout<< "division="<< d3<<endl;
            break;
      
        }
        
        default :{
            cout <<"Wrong Choice";
            break;
        }
        
        
        
        
    }
       return 0; 
        
        
        }