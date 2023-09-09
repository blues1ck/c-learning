#include <iostream>

int square_digits(int num){
    std::string res = "";
    if (num == 0){
        return 0;
    }
    else{
        while (num>0){
            int current = (num % 10)*(num % 10);
            res = std::to_string(current) + res;
            num /= 10;
        }
        int numb = std::stoi(res);
        return numb;
    }
}

int main(){
    
    int num;
    std::cin >> num;
    std::cout << square_digits(num) << "\n";

    return 0;
}