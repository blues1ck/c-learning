#include <iostream>

int main(){
    int a;
    std::cin >> a;
    switch (a){
        case 0: std::cout << "ZERO\n"; break;
        case 1: std::cout << "ONE\n"; break;
        default: std::cout << "OTHER\n"; break;
    }

}
