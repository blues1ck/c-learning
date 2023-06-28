#include <iostream>

int main(){
    int n;
    int res = 0;
    std::cout << "enter number\n";
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        res += a;
    }
    std::cout << res << "\n";
}
