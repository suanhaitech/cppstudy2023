#include <iostream>
using namespace std;
 
int main() 
{
  // 1
  // 数据类型 数据名 [行数][列数]
  int arr[2][3];
  arr[0][0] = 1;
  arr[0][1] = 2;
  arr[0][2] = 3;
  arr[1][0] = 1;
  arr[1][1] = 1;
  arr[1][2] = 1;
  // 外层行、内层列
  cout << "arr" << endl;
  for (int i = 0 ; i < 2 ; i++ )
  {
    for (int j = 0 ; j < 3 ; j++ )
    {
      cout << arr[i][j] << endl;
    }
  }
  
  // 2
  // 数据类型 数组名[ 行数 ][ 列数 ] = { { 数据1, 数据2 } , { 数据3,数据4 } }；
  int arr2[2][3] = 
  {
    {1,2,3} , 
    {4,5,6}
  };
  // 展示方法1
  cout << "arr2" << endl;
  for (int i = 0 ; i < 2 ; i++ )
  {
    for (int j = 0 ; j < 3 ; j++ )
    {
      cout << arr2[i][j] << endl;
    }
  }
  // 展示方法2
  cout << " " << endl;
  cout << "arr2" << endl;
  for (int i = 0 ; i < 2 ; i++ )
  {
    for (int j = 0 ; j < 3 ; j++ )
    {
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }
  
  // 3
  cout << " " << endl;
  cout << "arr3" << endl;
  // 数据类型 数组名[ 行数 ][ 列数 ] = { 数据1, 数据2, 数据3, 数据4}；
  int arr3[2][3] = {1,2,3,4,5,6};
  for (int i = 0 ; i < 2 ; i++ )
  {
    for (int j = 0 ; j < 3 ; j++ )
    {
      cout << arr3[i][j] << " ";
    }
    cout << endl;
  }
  
  
  // 4
  // 数据类型 数组名[ ][ 列数 ] = { 数据1, 数据2, 数据3, 数据4}；
  int arr4[][3] = {1,2,3,4,5,6};
  cout << " " << endl;
  cout << "arr4" << endl;
  for (int i = 0 ; i < 2 ; i++ )
  {
    for (int j = 0 ; j < 3 ; j++ )
    {
      cout << arr4[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
