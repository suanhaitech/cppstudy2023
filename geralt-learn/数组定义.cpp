#include <iostream>
using namespace std;
 
int main() {
  // 数组的三种定义 从0开始索引（通过下标）
  // 1
  int arr[ 5 ];
  arr[0] = 10;
  arr[1] = 10;
  arr[2] = 10;
  arr[3] = 10;
  arr[4] = 10;
  // 访问
  cout << arr[0] << endl;
  
  // 2
  int arr2[ 5 ] = { 1, 2, 2, 3, 4 }; // 若没有满，用0填充
  for ( int i = 0 ; i < 5 ; i++ )
  cout << arr2[i] << endl;
  
  // 3 
  int arr3[] = { 1, 4, 5, 6, 7};
  for ( int i = 0 ; i < 5 ; i++ )
  {
    cout << arr3[i] << endl;
  }
  return 0;
}
