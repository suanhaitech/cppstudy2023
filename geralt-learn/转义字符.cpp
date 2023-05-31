#include <iostream>
using namespace std;
 
int main() {
   // 常见的转义字符
   // \n 换行符 
   cout << "hello world" << endl; // C语言无endl
   cout << "hello world\n"; 
   
   // \\ 反斜杠 
   cout << "\\\n"; 
   
   // \t 水平制表符
   cout << "aaa\thelloworld\n";
   // 包括aaa共占用8个位置 
   cout << "aaaaaa\thelloworld\n";
   cout << "a\thelloworld\n";

   // 超过8个的实验
   cout << "\n";
   cout << "aaaaaaaaaaaaa\thelloworld\n";
   cout << "a\t\thelloworld\n";   
   return 0;
}
