// 使用了 int 和 double 引用
#include <iostream>

using namespace std;

int main()
{
	// 声明简单的变量
	int    i = 5;
	double d = 11.7;

	// 声明引用变量
	int&    r = i;
	double& s = d;
        
	cout << "Value of i :"<< i <<endl;
	cout << "Value of i reference:"<< r <<endl;

	cout << "Value of d :"<< d <<endl;
	cout << "Value of d reference:"<< d <<endl;

	return 0;
}

	
