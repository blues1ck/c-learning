#include <iostream>

int main(){

    int a = 5;
    int* pointer_a = &a; //pointer - указатель

    int& aref = a; // reference - ссылка

    std::cout << "value: " << a << ", pointer: " << pointer_a << ", reference: " << aref << "\n";

    int x = 3;
    int y = 0;

    int& refx = x;
    refx = y;
    std::cout << refx << x;
}