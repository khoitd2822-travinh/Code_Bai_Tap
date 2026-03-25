// kiểm tra số hoàn hảo 
// số hoàn hảo là số nguyên dương mà tổng ước số của nó (trừ nó) bằng chính nó
// số mình kiểm tra phải lớn hơn 1 vì số 1 có ước chính là nó.

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number integer : ";
    cin >> n;

    if (n <= 1){
        cout << n << " is not a perfect number." << endl;
        return 0;
    }else{
        int sum = 0;
        for (int i = 1; i < n;i++){
            if(n % i==0){
                sum += i;
            }
        }
        if (sum == n){
            cout << n << " is a perfect number." << endl;
        }else{
            cout << n << " is not a perfect number." << endl;
        }
    }
}