#include <iostream>
using namespace std;
 
int main() {
  // goto 语句
  cout << "1" << endl; 
  cout << "2" << endl; 
  goto FLAG; // 一般用大写，就这个吧
  cout << "3" << endl; 
  cout << "4" << endl; 
  cout << "5" << endl; 
  FLAG:
  cout << "6" << endl; 
  return 0;
}
