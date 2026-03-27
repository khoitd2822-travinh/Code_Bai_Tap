// dùng hàm cấu trúc, có 2 biến thành viên là tọa độ x và y.
// Tính khoảng cách giữa 2 điểm 
// Nhập mảng và tính độ dài các mảng 

#include<iostream>
#include<cmath>

using namespace std;

struct Diem{
    double x;
    double y;
};


double khoangCach(Diem a, Diem b){
    
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double doDaiCacDiem(Diem mang[], int soDiem){
    double tongkc = 0;
    for(int i = 0;i< soDiem - 1;i++){
        double kc = khoangCach(mang[i], mang[i+1]);
        tongkc += kc;
    }
    return tongkc;
}

void Nhap(Diem mang[], int soDiem){
    for(int i = 0;i<soDiem;i++){
        cout << "Nhap diem thu " << i + 1 << endl;
        cout << "x = ";
        cin >> mang[i].x;
        cin.ignore();
        cout << "y = ";
        cin >> mang[i].y;
        cin.ignore();
    }
}

void Xuat(Diem mang[], int soDiem){
    for(int i= 0;i<soDiem;i++){
        cout << "Diem thu " << i + 1;
        cout << "x = " << mang[i].x << endl;
        cout << "y = " << mang[i].y << endl;
    }
}

int main(){
    const int soDiem = 3;
    Diem mang[soDiem];
    
    Nhap(mang, soDiem);
    cout << "Danh sach cac diem da nhap : " << endl;
    Xuat(mang, soDiem);
    cout << "Do dai cac diem : " << doDaiCacDiem(mang, soDiem) << endl;

    return 0;

}