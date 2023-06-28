#include <iostream>

void Swap(int &x, int &y){
    std::cout << x << " " << y << "\n";
    int tmp = x; // 
    x = y; // 
    y = tmp; // 
}

int main(){
    int x = 1;
    int y = 0;

    Swap(x, y);    
    std::cout << x << " " << y << "\n";
}