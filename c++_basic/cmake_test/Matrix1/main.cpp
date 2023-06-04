#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::MatrixXd matrix(2, 2);
    matrix << 1, 2, 3, 4;

    Eigen::VectorXd vector(2);
    vector << 5, 6;

    Eigen::VectorXd result = matrix * vector;

    std::cout << "Result: "<< std::endl << result << std::endl;

    return 0;
}
