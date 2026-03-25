// Tính điểm trung bình của một học sinh dựa trên 3 môn học

#include <iostream>
#include <iomanip>
using namespace std;

void diemTrungBinh(float Mon1 , float Mon2, float Mon3){
    float diemTB = (Mon1 + Mon2 + Mon3) / 3;

    cout << "Diem trung binh cua hoc sinh : " << setprecision(3) << diemTB << endl;
    
    if(diemTB == 10 || diemTB >= 9){
        cout << "Hoc sinh xep loai Xuat sac." << endl;
    }else if (diemTB >= 8){
        cout << "Hoc sinh xep loai Gioi." << endl;
        
    }else if(diemTB >= 7){
        cout << "Hoc sinh xep loai Kha." << endl;
    }else if(diemTB >= 5){
        cout << "Hoc sinh xep loai Trung binh." << endl;

    }else{
        cout << "Hoc sinh xep loai Yeu." << endl;
    }
}


int main(){
    float mon1, mon2, mon3;

    cout << "Nhap diem mon 1 : ";
    cin >> mon1;
    cout << "Nhap diem mon 2 : ";
    cin >> mon2;
    cout << "Nhap diem mon 3 : ";
    cin >> mon3;

    diemTrungBinh(mon1, mon2, mon3);
}