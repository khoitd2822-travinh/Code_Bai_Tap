// Cho phân số có cấu trúc : tử , mẫu 
// Viết hàm cộng , trừ , nhân , chia phân số 

#include<iostream>
using namespace std;

struct phanSo{
    double tu;
    double mau;
};

int UCLN(int a, int b){
    a = abs(a);
    b = abs(b);

    if(b==0) return a;
    return UCLN(b, a % b);
}

void toiGianPhanSo(phanSo &ps){
    int ucln = UCLN(ps.tu, ps.mau);
    ps.tu /= ucln;
    ps.mau /= ucln;
}

void nhapPhanSo(phanSo &ps1, phanSo &ps2){
    cout << "Nhap phan so thu nhat : " << endl;
    cin >> ps1.tu >> ps1.mau;
    cin.ignore();
    cout << endl;
    cout << "Nhap phan so thu hai : " << endl;
    cin >> ps2.tu >> ps2.mau;
    cin.ignore();
}

phanSo congPhanSo(phanSo ps1, phanSo ps2){
    phanSo kq;
    kq.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;

    toiGianPhanSo(kq);
    return kq;
}

phanSo truPhanSo(phanSo ps1, phanSo ps2){
    phanSo kq;
    kq.tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    
    toiGianPhanSo(kq);
    return kq;
}

phanSo nhanPhanSo(phanSo ps1, phanSo ps2){
    phanSo kq;
    kq.tu = ps1.tu * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;

    toiGianPhanSo(kq);
    return kq;
}

phanSo chiaPhanSo(phanSo ps1, phanSo ps2){
    phanSo kq;
    kq.tu = ps1.tu * ps2.mau;
    kq.mau = ps1.mau * ps2.tu;

    toiGianPhanSo(kq);
    return kq;
}

int main(){
    phanSo ps1, ps2;
    phanSo kq, kq1, kq2, kq3;

    nhapPhanSo(ps1, ps2);
    kq = congPhanSo(ps1, ps2);
    kq1 = truPhanSo(ps1, ps2);
    kq2 = nhanPhanSo(ps1, ps2);
    kq3 = chiaPhanSo(ps1, ps2);

    cout << "tong hai phan so : " << kq.tu << " / " << kq.mau << endl;
    cout << "hieu hai phan so : " << kq1.tu << " / " << kq1.mau << endl;
    cout << "tich hai phan so : " << kq2.tu << " / " << kq2.mau << endl;

    if(ps2.tu!=0){
        cout << "thuong hai phan so : " << kq3.tu << " / " << kq3.mau << endl;
    }else{
        cout << "Khong chia duoc vi tu so cua phan so thu hai bang 0.";
    }

    return 0;
}