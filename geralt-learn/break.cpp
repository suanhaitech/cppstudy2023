#include <iostream>
using namespace std;
 
int main() {
  // 1. switch语句
  cout << "选择难度" << endl;
  cout << "1.普通" << endl;
  cout << "2.中等" << endl;
  cout << "3.困难" << endl;
  int select = 0;
  cin >> select;
  switch(select)
  {
    case 1:
    cout << "普通难度" << endl;
    break;
    case 2:    
    cout << "中等难度" << endl;
    break;
    case 3:
    cout << "困难难度" << endl;
    break;
    default:
    break;
  }
 
  // 2. 循环语句
  for (int i = 0; i < 10 ; i++ )
  {
    if (i == 5)
    {
      break;
    }    
    cout << i << endl;
  }
  
  // 3. 嵌套语句
  for (int i = 0 ; i < 10 ; i++ )
  {
    for (int j = 0 ; j < 10 ; j++ )
    {
      if (j == 5)
      {
        break; //退出内层循环
      }
      cout << "*  ";
    }
    cout << endl;
  }
  

  return 0;
}
