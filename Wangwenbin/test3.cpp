#include <iostream>
using namespace std;

//全局变量声明
int g = 77;


int main()
{
	{
	//局部变量声明,也是块作用域
	int g = 66;
	{ int g = 55;
		cout<< "g =" << g << endl;

	}
	cout << "g =" << g <<endl;
	
	}
	cout <<"g =" << g<<endl;
	return 0;	
}
