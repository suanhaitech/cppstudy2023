#include <iostream>
using namespace std;
 
int main()
{
  // 二维数组的数组名
  // 1 可以查看占用内存空间大小
  int arr[2][3] = 
  {
    {1,2,3},
    {4,5,6}
  };
  cout << "二维数组占用的空间为：" << sizeof(arr) << endl;
  cout << "二维数组第一行占用的内存为：" << sizeof(arr[0]) << endl;
  cout << "二维数组第一个元素占用的内存为：" << sizeof(arr[0][0]);

  cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
  cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]);

  // 2 可以查看二维数组的首地址
  cout << "二维数组的首地址为：" << arr << endl;
  cout << "二维数组第一行首地址为：" << arr[0] << endl;
  cout << "二维数组第二行首地址为：" << arr[1] << endl;
  cout << "二维数组第一个元素的首地址：" << arr[0][0] << endl;
  cout << "二维数组第二个元素的首地址：" << arr[0][1] << endl;

  return 0;
}
