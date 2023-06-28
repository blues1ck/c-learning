#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        array[i] = a;
    }
    for (int i = 0; i < n; ++i){
        std::cout << array[i] << ' ';
    }
    std::cout << "\n";
    delete array;
}