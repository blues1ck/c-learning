#include <iostream>

void f(int (&array)[2]){
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
}

int main(){
    int array[]{0,1};
    for (int i = 0; i < 2; ++i){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    f(array);
    for (int i = 0; i < 2; ++i){
        std::cout << array[i] << " ";
    }
}