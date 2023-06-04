#include <iostream>
#include <cmath>
using namespace std;
float pi = 3.14;
float area(float);
int main ()
{
	float i;

	cout << "请输入圆的的半径： ";
	cin >> i ;
	cout << "圆的面积是： " << area(i) << endl;

	return 0;
}

float area (float r )
{
        float s;
	s = pi*r*r;
	return s;
}
