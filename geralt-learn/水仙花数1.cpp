#include <iostream>
using namespace std;
 
int main() {
  // 水仙花数：三为数且每个位上的数字的3次幂之和等于它本身
  // 比如：1^3 + 5^3 + 3^3 = 153
  // 用do...while语句，求出3位数中的所有水仙花数
  int a = 1; // 百位
  int b = 0; // 十位
  int c = 0; // 个位
  int num = 0; // 三位数
  int t = 0;  // 定义判断数
  do
  {
    do
    {  
      do
      {   
          num = 100*a + 10*b + c;
          t = a*a*a + b*b*b + c*c*c;
          if (num == t)
          {
            cout << num << endl;
            c++;
          }
          else
          {
            c++;
          }
      }
     
     while(c < 10);
     c=0;
     b++;
    }
    while(b < 10);
    b = 0;
    a++;

  }
  while(a < 10);
  return 0;
}
