#include <iostream>

void f(int){
}
void f(int*){}
//void f(int&){}
void f(double){}
void f(float){}

int main(){
    int n = 0;
    f(n);
    double d = 0.0;
    f(0.0);
}
