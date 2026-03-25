// Kiểm tra số nguyên tố 

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "Enter a number integer : ";
    cin >> n;

    if ( n < 2 ){
        cout << n << " is not a prime number." << endl;
        return 0;
    }else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++){
            if(n %i==0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << n << " is a prime number." << endl;
        }else{
            cout << n << " is not a prime number." << endl;
        }
    }
}