#include<iostream>
using namespace std;

class fibonacci{
    private:
    int  n;

    public:
    
    void set(){
        cout << "Enter the value of n: " ;
        cin >> n;
        
    }

    int fib(int x, int y,int n,int i);
};

int fibonacci :: fib(int x, int y,int n,int i){
    if(i>=n){
        return y;
    }
        return fib(y,x+y,n,i+1);
    
}
int main(){
    
    fibonacci f;
    f.set();
    cout << f.fib(0,1,13,2);


   //cout <<" fibonacci number: "<< fibonacci f(0,1,n,2);

}