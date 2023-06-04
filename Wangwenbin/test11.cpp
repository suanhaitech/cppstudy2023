#include <iostream>
using namespace std;
//声明max函数
int max (int n1 , int n2);

int main()
{//声明局部变量
	int a = 20;
	int b = 30;
	int c;
//返回的result值会赋值给c
	c = max ( a , b );
	cout << " Max value is : " << c << endl;

	return 0;
}
//对max函数做定义
int max (int n1 , int n2)
{
	int result;

	if ( n1 > n2 )
		result = n1;
	else
		result = n2;
	return result;
}
