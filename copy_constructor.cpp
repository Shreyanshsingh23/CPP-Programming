#include<iostream>
using namespace std;

class area{
    
    private:

    int length, breadth, area;
    
    public:

    area(int x,  int y){
        length = x;
        breadth = y;

    }
     

    int cal(int x, int y){
        area = x*y;
        return area;
    }

    

};

int main(){
        area rectangle1 ;
        cout << "Area of rectangle : " << rectangle1.cal(10,20) << " units" << endl;

         area rectangle2(rectangle1) ;
        cout << "Area of rectangle : " << rectangle1.cal(rectangle1) << " units" << endl;
        
        return 0;
    }