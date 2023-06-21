#include <iostream>
using namespace std;

int main(){
    int c = 0;
    int p = 0;
    int T = 0;
    int i = 1;
    int logp = 1;
    cin >> T;
    for (i; i < T; i += 1){
        cin >> c;
        if (c < 2){
            cout << '1' << '\n';
        }
        p = 1;
        logp = 1;
        while (p <= c){
            p = 2* p;
            logp += 1;
        }
        cout << logp << '\n';    
    }

    return 0;
}