#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
        float f1 = 3.1415926535f;
        cout << "float 类型占用的内存大小：" << sizeof(float) << endl;
        cout << "float 类型占用的内存大小：" << sizeof(f1) << endl;

        double d1 = 3.1415926535;
        cout << "double 类型占用的内存大小：" << sizeof(double) << endl;
        cout << "double 类型占用的内存大小：" << sizeof(d1) << endl;

        //科学计数法表示整数
        float f2 = 3e2; // 3 * 10 ^ 2 
        cout << "f2 = " << f2 << endl;

        //科学计数法表示小数
        float f3 = 3e-2;  // 3 * 0.1 ^ 2
        cout << "f3 = " << f3 << endl;
        return 0;
}
