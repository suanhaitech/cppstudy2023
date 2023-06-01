#include <iostream>
using namespace std;
 
int main() {
   // 字符型变量的创建与大小
   char a = 'a';
   char b = 'b';
   char A = 'A';
   cout << a <<endl;
   cout << b <<endl;
   cout << A <<endl;
   cout << "a的大小为："<< sizeof(a) << endl;
   cout << "b的大小为："<< sizeof(b) << endl;
   cout << "A的大小为："<< sizeof(A) << endl;  
     
   // 字符型变量对应的ASCII编码值
   cout << "a的ASCII编码值为" << (int)a << endl;
   cout << "b的ASCII编码值为" << (int)b << endl;
   cout << "A的ASCII编码值为" << (int)A << endl;
   
   return 0;
}
