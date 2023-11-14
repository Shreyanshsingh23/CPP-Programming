#include<iostream>
using namespace std;

int main(){
    // for(int i=0;i<4;i++){
    //     cout<<"HELLO WORLD"<<endl;
    // }
    // cout<<"Enter a number"<<endl;
    // int n;
    // cin>>n;
    // int k = 1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }
    // int j = 1;
    // int i = 0;
    // i = (j++) + (++j);
    // cout<<i<<endl;
    // int k = (++j) + (--j);
    
    // cout<<k<<endl;
    // i = (--j) + (j++);
    // cout<<i<<endl;

    // int i = 1;

    // cout<<++i<<endl; //2
    // cout<<i++<<endl; //2
    // cout<<--i<<endl; //2
    // cout<<i--<<endl; //2
    // i = i + 1;
    int i = 0;
    int j = 1;
    int a = j++;
    int b = ++j;

    cout<<a<<"->"<<b<<endl;
    i = a + b;

    cout<<i<<endl;

    int c = ++j;
    int d = --j;
    cout<<c<<"->"<<d<<endl;
    i = c+d;
    cout<<i<<endl;

    int e = --j;
    int f = j++;
    cout<<e <<"->"<<f<<endl;
    i = e+f;
    cout<<i<<endl;
    return 0;
}