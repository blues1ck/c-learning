#include <iostream>

int max(const int &x, const int &y){
    return x > y ? x : y;
    // return *(&x) > *(&y) ? *(&x) : *(&y);
    // equal *(&x) = x
}

int main(){
    int x = 1;
    int y = 0;

    std::cout << max(x, y)<< "\n";
}