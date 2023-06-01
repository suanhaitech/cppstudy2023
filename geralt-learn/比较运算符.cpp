#include <iostream>
using namespace std;
 
int main() {
   // 比较运算符
   int a = 10;
   int b = 20;
   cout << (a == b) << endl; // 此处有优先级的比较，加小括号让比较运算符先运算 

   // !=
   cout << (a != b) << endl;
   
   // >
   cout << (a > b) << endl;
   
   // < 
   cout << (a < b) << endl;
   
   // >=
   cout << (a >= b) << endl;
   
   // <=
   cout << (a <= b) << endl;

   return 0;
}
