#include <iostream>
using namespace std;
int main(){

    int n;
    
    cout << "Enter the number" << endl;
    cin >> n;


int product_of_nums = 1;
int sum_of_nums = 0;

while(j != 0){
int i = n % 10;
int j = n / 10;

product_of_nums = product_of_nums * i;
sum_of_nums = sum_of_nums * i;


}
 
int product_sum = product_of_nums - sum_of_nums; 



return 0;
}