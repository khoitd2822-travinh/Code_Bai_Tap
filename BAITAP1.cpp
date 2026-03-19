// tính chu vi và diện tích hình tròn
// tính chu vi và diện tích hình chữ nhật 
// tính chu vi và diện tích hình vuông
// tính chu vi và diện tích hình tam giác

#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
    
    // tính chu vi và diện tích hình chữ nhật

    float a, b;
    cout << "enter the Length and Width of the rectangle : ";
    cin >> a >> b;

    cout << "The perimeter of the rectangle is : " << setprecision(2)<< 2 * (a + b ) << endl;
    cout << "The area of the rectangle is : " << setprecision(2)<< a * b << endl;

    // tính chu vi và diện tích hình vuông
    float c;
    cout << "enter the side of the square : ";
    cin >> c;


    cout << "The perimeter of the square is : "<< setprecision(2) << 4 * c << endl;
    cout << "The area of the square is : " << setprecision(2) << c * c << endl;
    
    // tính chu vi và diện tích hình tròn
    float r;
    cout << "enter the radius of the circle : ";
    cin >> r;

    cout << "The perimeter of the circle is : "<< setprecision(2) << 2 * M_PI * r << endl;
    cout << "The area of the circle is : " << setprecision(2) << M_PI * r * r << endl;



    // tính chu vi và diện tích hình tam giác
    float xA, yA, xB, yB, xC, yC;
    cout << "enter the sides of the triangle : ";
    cout << "xA : " << "yA : " << "xB : " << "yB : " << "xC : " << "yC : ";
    cin >> xA >> yA >> xB >> yB >> xC >> yC;

    float ab, ac, bc;
    float p;
    ab = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    ac = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
    bc = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));

    if(ab + ac > bc && ab + bc > ac && ac + bc > ab){
        cout << "Created triangle : " << endl;
        p = (ab + ac + bc) / 2;
        cout << "The perimeter of the triangle is : " << setprecision(2) << ab + ac + bc << endl;
        cout << "The area of the triangle is : " << setprecision(2) << sqrt(p * (p - ab) * (p - ac) * (p - bc)) << endl;

    }else{
        cout << "Can't create triangle with these sides" << endl;
    }


    return 0;

}