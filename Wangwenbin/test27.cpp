#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
	MatrixXd m = MatrixXd::Random(3,3);
	m = (m + MatrixXd::Constant(3,3,2.2)) * 20;
	cout << "m =" << endl << m << endl;
	VectorXd v(3);
	v << 3,2,1;
	cout << "m * v =" << endl << m * v << endl;
}

