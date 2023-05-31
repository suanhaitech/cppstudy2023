#include <iostream>
using namespace std;
 
int main() { 
   // 选择结构 单行if语句
   // 用户，输入分数，若大于600 则考上一本，输出
   
   // 1.用户输入分数
   int score = 0;
   cout << "请输入一个分数：" << endl;
   cin >> score;
   
   // 2. 打印用户输入的分数
   cout << "您输入的分数为：" << score << endl;  
   
   // 3. 判断分数是否大于600，若大于，则输出
   if (score > 600)
   {
       cout << "恭喜您考上了一本大学" << endl;
   }
   
   cout << ""<< endl; 
   return 0;
}
