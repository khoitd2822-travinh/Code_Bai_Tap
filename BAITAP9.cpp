// Parameter mặc định 

#include<iostream>
using namespace std;

int Tong(int a, int b){
    return a + b;
}

int Hieu(int a, int b){
    return a - b;
}

int Tich(int a, int b){
    return a * b;
}

int Thuong(int a, int b){
    if (b==0){
        cout << "Cannot divide by zero." << endl;
        return 0;
    }else{
        return a / b;
    }
}

int main(){
    int kq = Tong(5,5);
    int kq1 = Hieu(7,5);
    int kq2 = Tich(10,8);
    int kq3 = Thuong(9,3);

    cout << "Tong = " << kq << endl;
    cout << "Hieu = " << kq1 << endl;
    cout << "Tich = " << kq2 << endl;
    cout << "Thuong = " << kq3 << endl;
    
}