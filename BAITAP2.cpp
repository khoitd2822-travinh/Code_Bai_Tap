// Giải phương trình bậc 2 ( a khác 0 )

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void PTB2(float a, float b, float c){
    float delta = b * b - 4 * a * c;
    float x1 , x2;
    
    if (a == 0){
        cout << "a phai khac 0 de la phuong trinh bac 2." << endl;
        return;
    }else {
        if (delta > 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "x1 = " << setprecision(3) << x1 << endl;
            cout << "x2 = " << setprecision(3) << x2 << endl;
        }else if (delta == 0){
            x1 = -b / (2 * a);

            cout << "Phuong trinh co nghiem kep: " << endl;
            cout << "x1 =  " << setprecision(3) << x1 << endl;
        }else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    }    

}

int main(){
    float a, b, c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    PTB2(a, b, c);

    return 0;
}
        