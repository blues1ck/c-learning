#include <iostream>

int main(){
    int x = 0;
    int y = 0;
    int i = (++x, y++);
    std::cout << i << "\n";
    x = 0;
    y = 0;
    i = (x++, ++y);
    std::cout << i << "\n";
    x = 0;
    y = 0;
    i = x++, y++;
    std::cout << x << y << "\n";
    x = 0;
    y = 0;
    i = ++x, ++y;
    std::cout << x << y << "\n";
}