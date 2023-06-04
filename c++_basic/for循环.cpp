//求0~100之间的3的倍数的和
#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    
    int i = 0;
    int sum = 0;
    
    for (i; i <= 100; i++){
        if (i%3 == 0){
            sum += i;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
