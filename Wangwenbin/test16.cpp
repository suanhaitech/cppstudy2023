#include <iostream>
using namespace std;
const int MAX = 3;

int main()
{
	int n [MAX] = {121,144,169};
	int *p;

	p = n;
	for ( int i = 0; i < MAX; i++ )
	{
		cout << " n[" << i << "]的地址为：" ;
		cout << p << endl;

		cout << " n[" << i << "]的值为：" ;
		cout << *p << endl;

		p++;
	}
	return 0;
}
