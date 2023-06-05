// 嵌套 if-else 语句的使用
#include <iostream>
using namespace std;

int main()
{
	int x = 9;

	if (x <20)
	{
		cout << "x小于20" << endl;

		if (x < 15)
		{
			cout << "x小于15" << endl;
		}
		else
		{
			cout << "x的值大于等于15" << endl;
		}
	}
	else
	{
		cout << "x大于等于20" << endl;
	}

	return 0 ;
}



