// Dùng đệ quy tính fibonaci
// fibonaci : Giá trị số hiện tại = tổng 2 số đứng trước 
// ví dụ f3 = f1 + f2.

#include<iostream>
using namespace std;

int fibonaci(int n){
    if(n <= 2){
        return 1;
    }else{
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    
    int kq = fibonaci(n);
    cout << "fibonaci cua " << n << " = " << kq << endl;

}