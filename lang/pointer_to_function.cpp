#include <iostream>

int F(int x){
    return x*x;
}

int (*G)(int x) = &F;

int (&refF)(int x) = F;

int main(){
    int a;
    std::cin >> a;
    std::cout << F(a) << "\n";

    std::cin >> a;
    std::cout << G(a) << "\n";
    
    std::cin >> a;
    std::cout << (*G)(a) << "\n";
    
    std::cin >> a;
    std::cout << refF(a) << "\n";
}

