#include <iostream>
using namespace std;
 
int main() {
   // 1.单精度 float 默认双精度，需要转换，加f后则不需要
   float f1 = 3.14676778668f; 
   cout << "f1 = "<< f1 << "，占用空间为：" << sizeof(f1) << endl; 
   
   // 2.双精度 double
   double f2 = 3.12;
   cout << "f2 = "<< f2 << "，占用空间为：" << sizeof(f2) << endl; 
   
   return 0;
}
