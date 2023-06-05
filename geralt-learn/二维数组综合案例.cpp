#include <iostream>
using namespace std;
 
int main()
{
  int arr[3][3] = 
  {
    {100,100,100},
    {89,88,100},
    {90,78,99}
  };
  int score[3] = {0,0,0};
  for (int i = 0 ; i < 3 ; i++)
  {
    for (int j = 0 ; j < 3 ; j++)
    {
      score[i] = score[i] + arr[i][j];
    }
  }
  cout << "张三的总成绩为：" << score[0] << endl;
  cout << "李四的总成绩为：" << score[1] << endl;
  cout << "王五的总成绩为：" << score[2] << endl;  
  return 0;
}
