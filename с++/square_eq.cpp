#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a = 0;
    double b = 0;
    double c = 0;
    cin >> a >> b >> c;
    if ((b*b - 4*a*c) < 0){
        cout << "No real roots" << "\n";
    }
    else if ((b*b - 4*a*c) == 0){
        if (b == 0){
            cout << 0 << " " << 0 << "\n";
        }
        else{
            cout << (-b/(2*a)) << " " << (-b/(2*a)) << "\n";
        }
    }
    else{
        cout << ((-b-sqrt(b*b - 4*a*c))/(2*a)) << " " << ((-b+sqrt(b*b - 4*a*c))/(2*a)) << "\n";
    }
    return 0;
}