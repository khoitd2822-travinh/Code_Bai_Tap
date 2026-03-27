// Mảng 2 chiều 

// Viết chương trình tạo mảng 2 chiều kích thước 4 dòng , 6 cột, các ptu ngẫu nhiên
// Xuất các giá trị 
// Tìm số lớn nhất trong mảng, xuất kết quả.
// Tìm số nhỏ nhất trong mảng, xuất kết quả.
// Tính tổng các phần tử.
// Cho người dùng nhập số bất kì, kiểm tra số đó có trong mảng ko, nếu có thì bao nhiêu số.

#include<iostream>
#include<random>
#include<algorithm>

using namespace std;

int main(){

    // Tạo mảng ngẫu nhiên

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> dis(0, 99);
    
    int Mang[4][6];

    for(int i = 0; i < 4;i++){
        for(int j = 0; j < 6;j++){
            Mang[i][j] = dis(gen);
        }
    }
 
    // Xuất ra kết quả

    for(int i = 0;i<4;i++){
        for(int j = 0;j < 6;j++){
            cout << Mang[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Tìm giá trị lớn nhất, nhỏ nhất trong mảng

    int max = Mang[0][0];
    int min = Mang[0][0];

    for(int i = 0;i<4;i++){
        for(int j = 0;j<6;j++){
            if(Mang[i][j] > max){
                max = Mang[i][j];
            }

            if(Mang[i][j] < min){
                min = Mang[i][j];
            }
        }
    }

    cout << "Gia tri lon nhat trong mang : " << max << endl;
    cout << "Gia tri nho nhat trong mang : " << min << endl;

    // Tính tổng các phần tử trong mảng.

    int sum = 0;

    for(int i = 0;i<4;i++){
        for(int j = 0;j<6;j++){
            sum += Mang[i][j];
        }
    }
    cout << "Tong cac phan tu trong mang : " << sum << endl;

    // Kiểm tra số người dùng nhập.

    int so;
    string vitri = " ";
    int dem = 0;

    cout << "nhap gia tri can tim : ";
    cin >> so;

    for(int i =0;i<4;i++){
        for(int j = 0;j<6;j++){
            if(so == Mang[i][j]){
                dem ++;
            }
        }
    }

    if(dem ==0){
        cout << "Khong tim thay so " << so << " trong mang.";
    }else{
        cout << "Co " << dem << " so " << so << " trong mang.";
    }
}