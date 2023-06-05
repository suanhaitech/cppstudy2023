#include <iostream>
using namespace std;
 
int main() {
   // switch语句
   // 给电影打分 9-10 经典 7-8 非常好 5-6 一般 5以下 烂片
   
   // 提示评分
   cout << "请给电影进行评分："; 
   // 用户打分
   int score = 0;
   cin >> score;
   cout << "您打的分数为：" << score << endl;
   
   // 根据分数输出结果
   switch(score)
   {
      case 10:
      cout << "您认为是经典电影" << endl;
      break; // 退出当前分支      
      case 9:
      cout << "您认为是经典电影" << endl;
      break; 
      case 8:
      cout << "您认为电影非常好" << endl;
      break; 
      case 7:
      cout << "您认为电影非常好" << endl;
      break; 
      case 6:
      cout << "您认为电影一般" << endl;
      break; 
      case 5:
      cout << "您认为电影一般" << endl;
      break; 
      
      default:
      cout << "您认为这是烂片" << endl;
      break;
      
      
      
   }
   cout << "" << endl; 
   return 0;
}
