#include <iostream>
using namespace std;
 // 对数组冒泡排序
int main() 
{
  int arr[] = {3,1,5,7,2,6,2,6,4,7,9,0};
  int s = sizeof(arr) / sizeof(arr[0]); // 数组元素个数
  cout << "排序前：" << endl;
  for (int i = 0; i < 9; i++)
  {
    cout << arr[i] << endl;
  }
  cout << endl;
  // 开始排序
  // 排序总轮数=元素个数-1
  for(int i = 0; i < s - 1; i++)
  {
    // 内层循环对比 次数 = 元素个数 - 当前轮数 - 1；
    for (int j = 0; j < s - i - 1; j++)
    {
      // 若第一个大于第二个，交换
      if (arr[j] > arr[j+1])
      {
      int temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
      }
    }
  }
  // 排序后结果 
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
   
  return 0;
}
