#include <iostream>
using namespace std;
 
int main() {
   // 1.前置递增
   int a = 10;
   ++a; // 让变量+1
   cout << "a = " << a << endl;
    
   // 2.后置递增
   int b=10;
   b++; // 让变量+1
   cout << "b = " << b << endl;
    
   // 3.前后置的区别
   // 前置 先让变量+1 后进行表达式的运算
   int a2 = 10;
   int b2 = ++a2 * 10;
   cout << "a2=" << a2 << endl; // 11
   cout << "b2=" << b2 << endl; // 110
   
   // 后置 先进行表达式运算 后让变量+1
   int a3 = 10;
   int b3 = a3++ * 10;
   cout << "a3=" << a3 << endl; // 11
   cout << "b3=" << b3 << endl; // 100
   
   // 4.递减同理
   
   return 0;
}
