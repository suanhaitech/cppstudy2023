#include <iostream>
using namespace std;

int main()
{
	const int a = 100;
	const int b = 200;
	const char c = '\n' ;//const前缀声明指定类型的常量
	int area;

	area = a * b;
	cout << area;
	cout << c;
	return 0;
}
