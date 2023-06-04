#include <iostream>
using namespace std;

// 变量声明
extern int a,b;
extern int c;
extern float f;

int main()
{
	//变量定义
	int a,b;
	int c;
	float f;

	//实际初始化
	a = 15;
	b = 23;
	c = a+b;

	cout << c << endl ;

	f = 26.0/9.0 ;
	cout << f << endl ;
	
	return 0;
}
