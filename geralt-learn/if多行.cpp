#include <iostream>
using namespace std;
 
int main() {
   // 选择结构 多行if语句
   // 输入考试分数，若分数大于600,考上一本，输出；否则打印未考上一本
   
   // 1.输入分数
   int score = 0;
   cout << "输入一个考试分数：" ;
   cin >> score; 
   
   // 2.提示用户输入分数
   cout << "您输入的分数为：" << score << endl;
   
   // 3.判断
   if (score > 600)
   {   
      cout << "恭喜考上一本" << endl;
   }
   else
   {
      cout << "没考上一本" << endl;
   }

   return 0;
}
