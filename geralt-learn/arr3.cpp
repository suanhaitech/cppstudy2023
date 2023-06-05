#include <iostream>
using namespace std;
 
int main() 
{ 
  // 数组元素逆置
  int arr[] = {1,4,5,6,34,53,2,7,8,7};
  int start = 0;
  int end = sizeof(arr)/sizeof(arr[0]) - 1; // 末尾元素下标
  int t = end + 1;
  for (int i = 0; i < t ; i++ )
  {
    cout << arr[i] << endl;
  }
  cout << endl;  
  while (start < end)
  {
  // 实现元素互换
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;

  // 下标更新
  start++;
  end--;
  }
  for (int i = 0 ; i < t ; i++ )
  {
    cout << arr[i] << endl;
  }

  return 0;
}
