#include <iostream>
using namespace std;
 
int main() {
   // 选择结构 多条件 if
   // 输入分数 600+一本 500+ 二本 否则没考上大学
   int score = 0;
   cout << "请输入您的分数：";
   cin >> score;
   
   cout << "您的分数为：" << score << endl;
   
   if (score > 600)
   {   
      cout << "恭喜你考上一本" << endl;
   }
   else if (score > 500)
   {
      cout << "恭喜你考上二本" << endl;
   }
   else
   {
      cout << "没书读" << endl;
   }
   cout << "" << endl; 
   return 0;
}
