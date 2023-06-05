//块作用域
#include <iostream>

int main(){
	int a = 15;
	{
		int a =25; // 块作用域变量
		std::cout << "块变量："<< a << std :: endl;
	}
	std::cout << "外部变量："<< a << std :: endl;
	return 0;
}

