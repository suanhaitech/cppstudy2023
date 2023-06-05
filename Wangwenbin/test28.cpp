#include <iostream>
#include <eigen3/Eigen/Dense>
using namespace std;
int main()
{
    Eigen::MatrixXf matrix1(2,3);
    Eigen::MatrixXf matrix2(3,2);

    matrix1 << 1, 2, 3,
               5, 6, 7;

    matrix2 << 3, 1,
               2, 2,
 	       1, 3;
    cout <<" matrix1 "<< endl << matrix1 << endl;
    cout <<" matrix2 "<< endl << matrix2 << endl;
    cout << "matrix1 * matrix2 " << endl << matrix1 * matrix2 <<endl; 
}
