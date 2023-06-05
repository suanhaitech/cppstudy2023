#include <iostream>
using namespace std;
 
int main() 
{
  // 0-100 中 输出奇数
  for (int i = 0; i < 101 ; i++ )
  {
    if ( i % 2 == 0)
    {
      continue;
    }
    cout << i << endl;
  }  
 
  return 0;
}
