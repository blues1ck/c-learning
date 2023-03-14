#include <iostream>
using namespace std;

int power(int x, unsigned p){
    int answer = 1;
    for (int i = 0; i < p; i += 1){
        answer *= x;
    }
    return answer;
};
int main(){
    cout << power(2, 5);
    return 0;
}