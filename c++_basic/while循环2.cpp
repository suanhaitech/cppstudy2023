#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    
    int small,big,count;
    cout << "请从小到大输入两个正整数： " << endl;
    cin >> small >> big;
    
    while (small <= big){
        count = count + small;
        small ++;
    }
    
    cout << count << endl;
    
    return 0;
}
