// bài tập mảng cấu trúc 

#include <iostream>
using namespace std;

struct sinhVien{
       int MSSV;
       char tenSV[100];
       char lopHoc[100]; 
};

void Nhap(sinhVien ds[], int soLuong){
    for(int i= 0;i<soLuong;i++){
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl; 
        cout << "Nhap MSSV : ";
        cin >> ds[i].MSSV;
        cin.ignore();

        cout << "Nhap lop hoc : ";
        cin >> ds[i].lopHoc;
        cin.ignore();

        cout << "Nhap ho ten sinh vien : ";
        gets_s(ds[i].tenSV, sizeof(ds[i].tenSV));
        cin.ignore();

        
    }
}

void Xuat(sinhVien ds[], int soLuong){
    for(int i =0;i<soLuong;i++){
        cout << "Thong tin sinh vien thu " << i + 1 << endl;
        cout << "MSSV : " << ds[i].MSSV << endl;
        cout << "Lop hoc : " << ds[i].lopHoc << endl;
        cout << "Ten sinh vien : " << ds[i].tenSV << endl;
        
    }
}

int main(){
    const int soLuong = 2;
    sinhVien ds[soLuong];

    Nhap(ds, soLuong);
    
    cout << "Danh sach sinh vien da nhap thong tin." << endl;

    Xuat(ds, soLuong);
}