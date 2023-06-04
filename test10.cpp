#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 8;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

	if ( a > b && a < b )
	{
		cout << " a 大于 b 且 a 小于 b 为真 " << endl;
	}
	else
	{
		cout << " a 大于 b 且 a 小于 b 为非真 " << endl;
	}
	if ( a = b || a < b )
	{
		cout << " a 等于 b 且 a 小于 b 为真 " << endl;
	}
	else
	{
		cout << " a 等于 b 且 a 小于 b 为非真 " << endl;
	}
	return 0;
}
