#include <iostream>
using namespace std;
 
int main() {
   // 三目运算符
   
   // 创建三个变量 a b c
   // 将a、b作一个比较，将变量大的值赋给c
   int a = 10;
   int b = 20;
   int c = 0;
   
   c = (a > b ? a : b);
   
   cout << "c = "<< c << endl; 
   
   // C++中三目运算符返回的是变量，可以继续赋值
   (a > b ? a : b) = 100;
   cout << "a = "<< a << endl;
   cout << "b = "<< b << endl;
   return 0;
}
