// viết chương trình sử dụng hàm cấu trúc
// tạo đối tượng nhân viên 1 và nhân viên 2 có đầy đủ các thông tin
// khai báo bằng con trỏ

#include<iostream>
#include<cstring>
using namespace std;

struct diaChi{
    char soNha[50];
    char tenDuong[100];
    char quan[100];
    char thanhPho[100];
};

struct nhanVien{
    int maNV; 
    char hoTenNV[100];
    int tuoi;
    bool gioiTinh;
    diaChi diaChiNha;
    diaChi diaChiCoQuan;
};

int main(){
    nhanVien* nv1, *nv2;
    nv1 = new nhanVien;
    nv2 = new nhanVien;
    
    *nv1 = {01, "Nguyen Van A",18, true, {"34/55A", "Tran Hung Dao", "Quan 1", "TP HCM"}, {
        "23/1", "Nguyen Binh Khiem", "Quan 1", "TP HCM" }};
    *nv2 = {02, "Tran Thi B",20, false, {"70/2B", "Nguyen Hue", "Quan 2", "TP HCM"}, {
        "66/9C", "An Duong Vuong", "Quan 3", "TP HCM" }};

    cout << "Thong tin nhan vien 1: " << endl;
    cout << "Ma nhan vien : " << nv1->maNV << endl;
    cout << "Ten nhan vien : " << nv1->hoTenNV << endl;
    cout << "Tuoi : " << nv1->tuoi << endl;
    cout << "Gioi tinh : " << (nv1->gioiTinh ==true ? "Nam" : "Nu") << endl;
    cout << "Dia chi nha : " << endl;
    cout << "So nha : " << nv1->diaChiNha.soNha << ", Ten duong : "<< nv1->diaChiNha.tenDuong
    << ", Quan : " << nv1->diaChiNha.quan << ", Thanh pho : " << nv1->diaChiNha.thanhPho << endl;
    cout << "Dia chi co quan : " << endl;
    cout << "So : " << nv1->diaChiCoQuan.soNha << ", Ten duong : " << nv1->diaChiCoQuan.tenDuong 
    << ", Quan : " << nv1->diaChiCoQuan.quan << ", Thanh pho : " << nv1->diaChiCoQuan.thanhPho << endl;


    cout << "Thong tin nhan vien 2: " << endl;
    cout << "Ma nhan vien : " << nv2->maNV << endl;
    cout << "Ten nhan vien : " << nv2->hoTenNV << endl;
    cout << "Tuoi : " << nv2->tuoi << endl;
    cout << "Gioi tinh : " << (nv2->gioiTinh == true ? "Nam" : "Nu") << endl;
    cout << "Dia chi nha : " << endl;
    cout << "So nha : " << nv2->diaChiNha.soNha << ", Ten duong : " << nv2->diaChiNha.tenDuong <<
    ", Quan : " << nv2->diaChiNha.quan << ", Thanh pho : " << nv2->diaChiNha.thanhPho << endl;
    cout << "Dia chi co quan : " << endl;
    cout << "So : " << nv2->diaChiCoQuan.soNha << ", Ten duong : " << nv2->diaChiCoQuan.tenDuong 
    << ", Quan : " << nv2->diaChiCoQuan.quan << ", Thanh pho : " << nv2->diaChiCoQuan.thanhPho;




}