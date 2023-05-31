#include <iostream>
using namespace std;
 
// 1、宏常量(注意结尾没有；)
#define day 7
 
int main()
{ 
   cout << "一周共有" << day << "天" << endl; 
   
   //2、const修饰变量
   const int month = 12;
   cout << "一年共有" << month << "月" << endl; 
   
   return 0;
}
