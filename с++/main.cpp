#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char str = '\0';
    int count = 0;
    while ( cin.get(str)){
        if (str != 'a'){
            if ((str != ' ')||( str != '\n')){
            cout << "Your simbol is:" << str << "\n";
            count += 1;
            }
            else{
                continue;
            }
        }
        else{
            cout << "Your simbol is:" << str << " ,input is ended, simbol's number:" << count << "\n";
            break;
        }
    }
    return 0; 
}