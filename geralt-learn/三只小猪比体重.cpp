#include <iostream>
using namespace std;
// 有三只小猪ABC，分别输入其体重，并判断哪只最重
int main() {
   float a = 0.0f;
   float b = 0;
   float c = 0;
   
   // 用户输入三只小猪的重量
   cout << "请输入小猪A的体重（kg）：";
   cin >> a;
   cout << "请输入小猪B的体重（kg）：";
   cin >> b;
   cout << "请输入小猪C的体重（kg）：";
   cin >> c;
   
   cout << "小猪A的重量为" << a << "(kg)" << endl;
   cout << "小猪B的重量为" << b << "(kg)" << endl;
   cout << "小猪C的重量为" << c << "(kg)" << endl;
   
   // 判断
   if (a > b)
   {
     if (a > c)
     {
       cout << "小猪A最重，为：" << a << "(kg)" << endl;
     }
     else if (a == c)
     {
       cout << "小猪A、C一样重，为：" << a << "(kg)" << endl;
     }
     else
     {
       cout << "小猪C最重，为：" << c << "(kg)" << endl;
     }
   }
   else if (a == b)
   {
     if (a > c)
     {
       cout << "小猪A、B一样重，为：" << a << "(kg)" << endl;
     } 
     else if (a == c)
     {
       cout << "三只猪一样重，为：" << a << "(kg)" << endl;
     }
     else
     {
       cout << "小猪C最重，为：" << c << "(kg)" << endl;
     }
   }
   else
   {
     if (b > c)
     {
       cout << "小猪B最重，为：" << b << "(kg)" << endl;
     }
     else if (b == c)
     {
       cout << "小猪B、C一样重，为：" << b << "(kg)" << endl;
     }
     else
     {
       cout << "小猪C最重，为：" << c << "(kg)" << endl;
     }
   }

   return 0;
}
