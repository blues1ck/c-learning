#include <iostream>

int main(){
    int x = 1;
    std::cout << &x << "\n";
    int* p = &x;
    std::cout << *p << "\n";
}
