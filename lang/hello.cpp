#include <iostream>

int def(int a){
    return 2*a;
}


int main(){
	int a = 3;
	int b = 4;
	std::cout << a + b << "\n";
    
	std::cout << def(a) << "\n";
}
