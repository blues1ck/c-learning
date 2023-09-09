#include <iostream>
// включать только со стражем в print.h
#include "printmax.h"
#include "printsum.h"

int main(){
    int a;
    int b;
    std::cin >> a >> b;
    printmax(a, b);
    printsum(a, b);
}