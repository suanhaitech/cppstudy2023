//
// Created by concha on 23-5-31.
//

#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <stdexcept>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int columns;

public:
    // 构造函数
    Matrix(int r, int c) : rows(r), columns(c) {
        data.resize(rows, std::vector<int>(columns, 0));
    }

   // 获取矩阵的行数
    int getRows() const {
        return rows;
    }

    // 获取矩阵的列数
    int getColumns() const {
        return columns;
    }

    // 设置矩阵元素
    void setElement(int row, int column, int value) {
        data[row][column] = value;
    }

    // 获取矩阵元素
    int getElement(int row, int column) const {
        return data[row][column];
    }

   // 矩阵加法
    Matrix operator+(const Matrix& other) const {
        if (rows != other.getRows() || columns != other.getColumns()) {
            throw std::invalid_argument("矩阵维度不匹配");
        }

        Matrix result(rows, columns);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                result.setElement(i, j, data[i][j] + other.getElement(i, j));
            }
        }
        return result;
    }

   // 矩阵减法
    Matrix operator-(const Matrix& other) const {
        if (rows != other.getRows() || columns != other.getColumns()) {
            throw std::invalid_argument("矩阵维度不匹配");
        }

        Matrix result(rows, columns);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                result.setElement(i, j, data[i][j] - other.getElement(i, j));
            }
        }
        return result;
    }

   // 矩阵乘法
    Matrix operator*(const Matrix& other) const {
        if (columns != other.getRows()) {
            throw std::invalid_argument("矩阵维度不匹配");
        }

        int resultRows = rows;
        int resultColumns = other.getColumns();
        Matrix result(resultRows, resultColumns);

        for (int i = 0; i < resultRows; i++) {
            for (int j = 0; j < resultColumns; j++) {
                int sum = 0;
                for (int k = 0; k < columns; k++) {
                    sum += data[i][k] * other.getElement(k, j);
                }
                result.setElement(i, j, sum);
            }
        }
        return result;
    }

      // 生成零矩阵的静态方法
    static Matrix zeroMatrix(int n) {
        return Matrix(n, n);
    }

    // 生成单位阵的静态方法
    static Matrix identityMatrix(int n) {
        Matrix result(n, n);
        for (int i = 0; i < n; i++) {
            result.setElement(i, i, 1);
        }
        return result;
    }

      void printMatrix() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
};

std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (int i = 0; i < matrix.rows; i++) {
        for (int j = 0; j < matrix.columns; j++) {
            os << matrix.data[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
};

#endif //MATRIX_H
