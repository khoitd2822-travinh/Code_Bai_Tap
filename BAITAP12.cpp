// Mảng 1 chiều 
// Viết chương trình tạo mảng 1 chiều các ptu là số nguyên , có 7 ptu ngẫu nhiên
// Xuất các giá trị trong mảng 
// Đảo ngược mảng, xuất mảng sau khi đảo ngược
// Sắp xếp mảng tăng dần
// Tính tổng các phần tử trong mảng
// Cho người dùng nhập số bất kì, kiểm tra số đó có trong mảng ko, nếu có thì bao nhiêu số.

#include<iostream>
#include<algorithm>
#include<random>

using namespace std;
int main(){

    // Tạo mảng ngẫu nhiên

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> dis(0, 99);

    int Mang[7];
    for(int i = 0;i<size(Mang);i++){
        Mang[i] = dis(gen);
    }

    // Xuất các giá trị trong mảng
    for(int pt : Mang){
        cout << pt << " ";
    }
    cout << endl;
    // Đảo ngược mảng

    reverse(Mang, Mang + size(Mang));
    cout << "Mang sau khi dao nguoc : ";
    for(int pt : Mang){
        cout << pt << " ";
    }
    cout << endl;

    // Sắp xếp mảng tăng dần

    sort(Mang, Mang + size(Mang));
    cout << "Mang sau khi sap xep : ";
    for(int pt : Mang){
        cout << pt << " ";
    }
    cout << endl;

    // Tính tổng các giá trị trong mảng

    int sum = 0;
    for(int i = 0;i<size(Mang);i++){
        sum += Mang[i];
    }
    cout << "Tong cac phan tu trong mang : " << sum << endl;

    // Kiểm tra số người dùng nhập

    int so;
    string vitri = " ";
    int dem = 0;

    cout << "Moi ban nhap gia tri can tim : ";
    cin >> so;

    for(int i = 0;i<size(Mang);i++){
        if(so == Mang[i]){
            dem ++;
        }
    }
    if(dem==0){
        cout << "Khong co so " << so << " trong mang.";
    }else{
        cout << "Co " << dem << " so " << so << " trong mang.";
    }

}