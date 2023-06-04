#include <iostream>
using namespace std;
 
int main()
{    
    float n1, n2, n3;
 
    cout << "请输入三个数: ";
    cin >> n1 >> n2 >> n3;
 
    if(n1 >= n2 && n1 >= n3)
    {
        cout << "最大数为: " << n1;
    }
 
    if(n2 >= n1 && n2 >= n3)
    {
        cout << "最大数为: " << n2;
    }
 
    if(n3 >= n1 && n3 >= n2) {
        cout << "最大数为: " << n3;
    }
 
    return 0;
}
