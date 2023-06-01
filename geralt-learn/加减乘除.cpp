#include <iostream>
using namespace std;
 
int main() {
   // 加减乘除
   int a1 = 10;
   int b1 = 3;
   
   cout << a1 + b1 << endl;
   cout << a1 - b1 << endl;
   cout << a1 * b1 << endl;
   cout << a1 / b1 << endl; // 规定整数相除依旧为整数
   
   int a2 = 10;
   int b2 = 20;
   cout << a2 /b2 << endl; 

   
   // 小数相除
   double a3 = 0.5;
   double b3 = 0.22;
   cout << a3 / b3 << endl; 

   return 0;
}
