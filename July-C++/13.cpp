// 这个程序演示了有符号整数和无符号整数之间的差别
#include <iostream>
using namespace std;

int main()
{
	short int i;  // 有符号短整数
	short unsigned int j;  // 无符号短整数

	j = 52000;

	i = j;
	cout << i << " " << j << endl;

	return 0;
}

