#include <iostream>
using namespace std;

int main ()
{
	float n,m;
	cout << "请输入第一个数：";
	cin >> n;
        cout << "请输入第二个输：";
	cin >> m;

	if ( n < m )
	{
		cout << "较大的数为：";
		cout << m << endl;
	}

	else
	{
		cout << "较大的数为：";
		cout << n << endl;
	}

	return 0;
}
