#include <iostream>
using namespace std;

int main(){
    char c = '\0';
    bool is_ok = true;
    while (cin.get(c)) {
        if ((c != ' ') or (is_ok == true)){
            cout << c;
        }
        if (c == ' '){
            is_ok = false;
            // continue;
        }
        else{
            is_ok = true;
        }
    }
    return 0;
}