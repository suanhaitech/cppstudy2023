#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    // 创建一个2x2的矩阵并设置元素
    Matrix mat(2, 2);
    mat.setElement(0, 0, 1);
    mat.setElement(0, 1, 2);
    mat.setElement(1, 0, 3);
    mat.setElement(1, 1, 4);

    Matrix vector(2, 1);
    vector.setElement(0, 0, 5);
    vector.setElement(1, 0, 6);

    // 获取矩阵的行数和列数
    int rows = mat.getRows();
    int columns = mat.getColumns();
    std::cout << "矩阵的行数：" << rows << std::endl;
    std::cout << "矩阵的列数：" << columns << std::endl;

    // 生成一个2x2的零矩阵和单位阵
    Matrix zeroMat = Matrix::zeroMatrix(2);
    Matrix identityMat = Matrix::identityMatrix(2);

    // 进行矩阵加法、减法和乘法操作
    Matrix result = mat * vector;

    // 输出结果
    std::cout << "初始矩阵" << std::endl;
    mat.printMatrix();
    std::cout << "零矩阵" << std::endl;
    zeroMat.printMatrix();
    std::cout << "单位阵" << std::endl;
    identityMat.printMatrix();
    cout << "直接输出矩阵：" << endl;
    cout << result << endl;

    return 0;
}


