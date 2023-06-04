#include <iostream>
using namespace std;

int main()
{
	int a = 45;
	int b = 10;
	int c;

	c = a + b;
	cout << " 加法 c = " << c << endl ; 
	c = a - b;
	cout << " 减法 c = " << c << endl ;
	c = a * b;
	cout << " 乘法 c = " << c << endl ;
	c = a / b;
	cout << " 除法 c = " << c << endl ;
	c = a % b;
	cout << " 求余 c = " << c << endl ;

	int d = 13;
	c = d;
	c++;
	cout << " 自增 c = " << c << endl ;
	c = d;
	// c 需要重新赋值一次，上个命令中被修改了
	c--;
	cout << " 自减 c = " << c << endl ;

	return 0;
}
