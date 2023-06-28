#include <iostream>

int main(){
    std::cout << "enter number: \n";
    int n;
    std::cin >> n;
    int res = 0;
    int i = 0;
    while (i < n){
        int a;
        std::cin >> a;
        i ++;
        res += a;
    }
    std::cout << res << "\n";
}
