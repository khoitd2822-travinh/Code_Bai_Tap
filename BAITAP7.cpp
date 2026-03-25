// Program nhập số từ bàn phím 
// Nếu chẵn thì tính tổng từ 0 đến số đó
// Nếu lẻ thì in ra chữ "Tạm biệt"

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap n : ";
    cin >> n;

    int sum = 0;
    if(n%2==0){
        for (int i = 0; i<=n; i++){
            sum += i;
        }
    }else{
        cout << "Toi chi tinh so chan, so le say byeee." << endl; 
        return 0;
    }
    cout << "Tong cac so chan tu 0 den " << n << " la : " << sum << endl;
}