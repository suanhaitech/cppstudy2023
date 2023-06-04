#include <iostream>
using namespace std;

int main()
{
	int a = 5 ;
	int b = 10 ;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	if ( a && b )
	{
		cout << " a 与 b 条件为真 " << endl;
	}
	else
	{
		cout << " a 与 b 条件为非真 " << endl;
	}
	
	if ( a || b )
	{
		cout << " a 或 b 条件为真 " << endl;
	}
	else
	{
		cout << " a 或 b 条件为非真 " << endl;
	}
	if ( !( a && b ))
	{
		cout << " 非 a 与 b 条件为真 " << endl;
	}
	else
	{
		cout << " 非 a 与 b 条件为非真 " << endl;
	}
	return 0; 
}
