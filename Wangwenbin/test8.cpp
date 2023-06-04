#include <iostream>
using namespace std;

int main()
{
	int a = 4;
	int b = 5;
	int c ;
        cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	if( a == b)
	{
		cout << " a 等于 b " << endl;
	}
	else
	{
		cout << " a 不等于 b " << endl;
	}
	if( a < b )
	{
		cout << " a 小于 b " << endl;
	}
	else
	{
		cout << " a 不小于 b " << endl;
	}
	if( a > b )
	{
		cout << " a 大于 b " << endl;
	}
	else
	{
		cout << " a 不大于 b " << endl;
	}
        if( a <= b )
	{ 
		cout << " a 小于等于 b " << endl;
	}
	else
	{
		cout << " a 大于等于 b " << endl;
	}
	return 0;
}
