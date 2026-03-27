// Dùng hàm đệ quy để tính giai thừa của một số nhập từ bàn phím 

#include<iostream>
using namespace std;

int giaiThua(int a){
    if(a <= 1){
        return 1;
    }else{
        return a * giaiThua (a - 1);
    }
}
int main(){
    int a;
    cout << "Enter a : ";
    cin >> a;

    int kq = giaiThua(a);
    cout << a << "! = " << kq << endl;
}