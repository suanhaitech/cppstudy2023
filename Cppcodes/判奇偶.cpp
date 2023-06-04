#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"输入一个整数：";
	cin >> n;
	if (n%2==0)
		cout << n << "这个数为偶数";
	else
		cout << n << "这个数为奇数";
	return 0;
}
