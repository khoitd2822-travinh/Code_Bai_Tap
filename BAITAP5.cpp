// Kiểm tra xem tháng mà người dùng nhập có bao nhiêu ngày
// tháng 1,3,5,7,8,10,12 có 31 ngày
// tháng 4,6,9,11 có 30 ngày
// tháng 2 có 28 ngày, nếu năm nhuận thì có 29 ngày
// năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100 hoặc chia hết cho 400

#include <iostream>
using namespace std;

void kiemTraThang(int month, int year){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Month " << month << " year " << year << " has 31 days." << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Month " << month << " year " << year <<" has 30 days." << endl;
            break;
        case 2:
            if (year % 4 ==0 && year % 400 ==0 || year % 100 !=0){
                cout << "Month " << month << " year " << year << " has 29 days." << endl;
                
            }else{
                cout << "Month " << month << " year " << year << " has 28 days." << endl; 
            }
            break;
        default:
            cout << "Invalid month." << endl;
            break;
    }
}

int main(){
    int month, year;
    cout << "Enter month : ";
    cin >> month;
    cout << "Enter year : ";
    cin >> year;

    kiemTraThang(month, year);

}

