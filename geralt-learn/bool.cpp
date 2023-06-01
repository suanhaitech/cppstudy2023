#include <iostream>
using namespace std;
 
int main() {

   bool flag = true;
   cout << flag << "所占用空间大小为：" << sizeof(flag) << endl; 
   
   flag = false; // 前面已经申明为bool
   cout << flag << "所占用空间大小为：" << sizeof(flag) << endl; 
   return 0;
}
