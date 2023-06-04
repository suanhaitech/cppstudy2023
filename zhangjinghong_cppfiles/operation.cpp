#include<iostream>
using namespace std;

int main() {
    //算数运算符
    int a1 = 10;
    int b1 = 3;
    cout << a1%b1 << endl;//取余

    int a = 10;
    ++a;//前置递增
    cout << "a=" << a<< endl;
    
    int b = 10;
    b++;//后置递增
    cout << "b = "<< b <<endl;

    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = "<< a2 << endl;
    cout << "b2 = "<< b2 << endl;

    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = "<< a3 << endl;
    cout << "b3 = "<< b3 << endl;

    //逻辑运算符
    cout << !a << endl;
    cout << !!a << endl;

    a =10;
    b =0;
    cout << (a&&b) << endl;//一假则假
    cout << (a||b) << endl;//一真则真






    


    system("pause");
    return 0;
}
