// viết chương trình nhập từ bàn phím 2 số 
// và phép toán +, -, *, / và in ra kết quả .

#include<iostream>
using namespace std;

void Tinh(float a, float b, char phepTinh){
    switch(phepTinh){
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b==0){
                cout << "Cannot divide by zero." << endl;

            }else{
                cout << a << " / " << b << " = " << a / b << endl;
            }
            break;
        default:
            cout << "Invalid operator. HIHI  :)) " << endl;
            break;
    }
}

int main(){
    float a, b;
    char phepTinh;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter operator ( + , - , * , / ) : ";
    cin >> phepTinh;

    Tinh(a, b, phepTinh);
}
