#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	short a = -2;
	double b = 233.3333;
	long c = 1000000;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "a 的绝对值为" << abs(a) << endl;
	cout << " sin(b) = " << sin(b) << endl;
	cout << " cos(b) = " << cos(b) << endl;
	cout << " tan(a) = " << tan(a) << endl;
	cout << " b 的取整为" << floor(b) << endl;
	cout << " log(b) = " << log(b) << endl;
	cout << " sqrt(c) = " << sqrt(c) << endl;
	cout << " pow(b,3) = " << pow(b,3) << endl;
	
	return 0;
}
