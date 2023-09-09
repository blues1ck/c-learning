#include <iostream>

std::string spinWord(const std::string& str){
    int n = 1;
    int len = str.length();
    for (int i = 0; i < len; ++i){
        if (str[i] == ' '){
            n += 1;
        }
    }
    std::string arr[n];
    std::string current = "";
    int j = 0;
    for (int i = 0; i < len; ++i){
        if (str[i] == ' '){
            arr[j] = current;
            current = "";
            ++j;
        } else{
            current += str[i];
        }
    }
    arr[n-1] = current;
    std::string res = "";
    for (int i = 0; i < n; ++i){
        if (arr[i].length() >= 5){
            std::string cur = "";
            for (int j = arr[i].length() - 1; j >= 0; --j){
                cur += arr[i][j];
            }
            arr[i] = cur;
        }
        res += arr[i];
        if (i != n-1){
            res += " ";
        }
    }
    return res;
}

int main(){
    
    std::string test = "Welcome";
    if ("emocleW" == spinWord(test)){

        std::cout << "ok" << "\n";
    }
}
