#include <iostream>
using namespace std;
 
int main() {
   // 整型
   // 1.短整型(-32768-32767)
   cout << "short占用的内存空间为："<< sizeof(short) << endl;
   
   // 2.整型
   cout << "int占用的内存空间为："<< sizeof(int) << endl;
    
   // 3.长整型
   cout << "long占用的内存空间为："<< sizeof(long) << endl;
   
   // 4.长长整型
   cout << "long long占用的内存空间为："<< sizeof(long long) << endl;

   
   return 0;
}
