#include <iostream>
using namespace std;

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main()
{
	//定义变量
	int a, b;
	int c;
	float f;

	// 实际初始化
	a = 10;
	b = 62;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 25.0;
	cout << f << endl;

	return 0;
}

