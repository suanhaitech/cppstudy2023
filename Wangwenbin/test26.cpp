#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
	Matrix3d m(3,3);
	m(0,0) = 1;
	m(1,0) = 2;
	m(2,0) = 3;
	m(0,1) = 4;
	m(0,2) = 5;
	m(1,1) = m(1,0) + m(0,1);
	m(1,2) = m(1,0) + m(0,2);
	m(2,1) = m(2,0) + m(0,1);
	m(2,2) = m(2,0) + m(0,2);
	cout << m << endl;
}
