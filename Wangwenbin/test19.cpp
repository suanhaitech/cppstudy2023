#include <iostream>
using namespace std;

const int MAX = 3;

int main ()
{
	int n [MAX] = {1,2,3};
	
	
	for (int i = 0; i < MAX ; i++)
	{
		cout << "数组 n 中第 " << i << " 个元素是 " ;
		cout << n [i] << endl;
	}

	int *p[MAX];
	cout << "赋值给指针数组后" << endl;

	for (int i = 0; i < MAX ; i++)
	{
		p[i] = &n[i];
	}
	for (int i = 0; i < MAX ; i++)
	{
		cout << " n 中第 " << i << " 个元素是 ";
		cout << *p[i] << endl;
	}
	
	return 0;
}
