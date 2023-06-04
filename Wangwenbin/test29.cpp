#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace std;
using namespace Eigen;

int main ()
{
	MatrixXi matrix(3,3);

        matrix << 1,2,3,
	          4,5,6,
		  7,8,9;
	cout << "矩阵：" << endl;
	cout << matrix << endl;
	cout << "转置：" << endl << matrix.transpose() << endl;
}
