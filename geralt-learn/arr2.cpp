#include <iostream>
using namespace std;
 
int main() 
{
  // 数组中找最大值
  int arr[] = {200, 300, 400, 134, 333};
  int max = 0; // 更新最大值
  for (int i = 0 ; i < 5 ; i++ )
  {
    if(max <= arr[i])
    {
      max = arr[i];
    }

  }
  cout << "最大值为：" << max << endl; 
  return 0;
}
