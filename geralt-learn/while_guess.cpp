#include <iostream>
using namespace std;
// time系统时间头文件的包含
#include <ctime>
int main() {
   // 添加随机数种子，利用当前系统时间生成随机数，防止每次都一样
   srand( (unsigned)time(NULL) );
   // 1. 系统生成随机数
   int num = rand() % 100 + 1; // rand()%100 + 1 生成 1-100随机数
   // 2. 玩家猜测
   int val = 0;
   

   // 3. 判断玩家猜测
   while(1)
   {
     cin >> val;
     if(val > num)
     {
       cout << "大了" << endl; 
     }
     else if(val < num)
     {
       cout << "小了" << endl;
     }
     else
     {
       cout << "猜对了" << endl;
       break; // 循环中，该关键字可退出循环

     }
   }

  


   // 猜对 退出游戏
   // 猜错 提示大小，重新猜
   cout << "" << endl; 
   return 0;
}
