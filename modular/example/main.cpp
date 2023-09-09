#include <iostream>

#include "max.h"
#include "sum.h"

int main(){
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << Max(a, b) << " " << Sum(a, b) << "\n";
}