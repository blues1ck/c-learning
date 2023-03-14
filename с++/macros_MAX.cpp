#include <iostream>
using namespace std;

#define MAX(x, y, r)({int t1 = (x); int t2 = (y); int t3 = (t1 > t2 ? t1 : t2); r = t3;})

int main(){
    int x = 10;
    int y = 20;
    int r = 0;
    cout << MAX(x, y, r);
    return 0;
}