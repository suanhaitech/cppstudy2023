#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    
    int count, num;
    count = 0;
    num = 0;
    while (num<10){
        count = count + num;
        num ++;
    }
    
    cout << count << endl;
    
    return 0;
}
