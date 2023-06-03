#include <iostream>
using namespace std;
// 水仙花方法二 取模 
int main()
{
  // 打印所有的三位数
  int num = 100;
  do
  {
    // 从三位数中找到水仙花数
    int a = 0;
    int b = 0;
    int c = 0;

    a = num % 10; // 个位
    b = num / 10 % 10; // 十位
    c = num / 100;  // 百位

    if (a*a*a + b*b*b + c*c*c == num)
    {
      cout << num << endl;
    }
    num++;
  }
  while (num < 1000); // 不要忘记了；
   
   return 0;
}
