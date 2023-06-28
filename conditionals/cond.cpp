#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;
    (y != 0) ? std::cout << x/y << "\n" : std::cout << "error" << "\n";
    
    false ? x : 0;
}
