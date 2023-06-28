#include <iostream>

#include <string>

std::string createPhoneNumber(const int arr [10]){
  	string res;
  	res = "(" + arr[0] + arr[1] + arr [2] + ") " ;
  	for (int i = 3; i < 6; i++){
		res += arr[i];
  	};  	res += "-";
	for (int i = 6; i < 10; i++){
		res += arr[i];		
	}
	return res
}
;
int main(){
	int[10] a = int[10] {1,2,3,4,5,6,7,8,9,0};
    int beb;
    std::cin >> beb; 
    std::cout << createPhoneNumber(a) << "\n";
}
