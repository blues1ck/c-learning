#include <iostream>

class data
{
    private:
        int size;

    public:
        data(int data_size){
            size = data_size;
            
        }
}

class id
{
    private:
        int number;
        int hash 

    public:
        id(int num){
            number = num;
        }
        void info(){
            std::cout << number;
        }

};


class hash
{
    
};

int main(){
    int num;
    std::cin >> num;
    id stack(num);
    stack.info();

    return 0;
}