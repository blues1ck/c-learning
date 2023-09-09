#include <iostream>

template <class T>
T abs(T x){return x >= 0 ? x : -x;}

template <class A, class B>
void print(A x, B y, int z = 0){
    std::cout << x << " " << y << " " << z << "\n";
}

//template <class A, class B>


int main(){
    print(abs(0.0), abs(0), 1);
}
