#include <iostream>
using namespace std;
 
int main() {
   // 数组名用途
   // 1. 数组名统计整个数组占用空间大小
   int arr[10] = { 1 ,2, 3, 4, 5, 6, 7, 8, 8, 9};
   cout << "整个数组占用内存空间大小为："  << sizeof(arr) << endl;
   cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
   cout << "数组中的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
   
   // 2. 可以通过数组名查看数组首地址
   cout << "数组首地址为：" << arr << endl; // 16进制
   // cout << "数组首地址为：" << (int)arr << endl; // 10进制
   cout << "数组第一个元素的地址为：" << &arr[0] << endl;
   
   // 数组名为常量，不可以赋值
   return 0;
}
