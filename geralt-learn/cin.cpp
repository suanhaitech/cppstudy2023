#include <iostream>
#include <string>
using namespace std;
 
int main() {
   
   // 整型输入
   int a = 0;
   cout << "清输入整型变量：" << endl; 
   cin >> a;
   cout << a << endl;
   
   // 浮点型输入
   double d = 0;
   cout << "清输入浮点型变量：" << endl; 
   cin >> d;
   cout << d << endl;
   
   // 字符型输入
   char ch = 'a';
   cout << "清输入字符型变量：" << endl; 
   cin >> ch;
   cout << ch << endl;
   
   // 字符串型输入
   string str = "a";
   cout << "清输入字符串型变量：" << endl; 
   cin >> str;
   cout << str << endl;   
   
   // 布尔型输入
   bool b = 0;
   cout << "清输入布尔型变量：" << endl; 
   cin >> b;
   cout << b << endl;
   
   return 0;
}
