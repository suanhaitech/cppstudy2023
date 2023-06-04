#include<iostream>
using namespace std;
int main(){
    //空指针
    int * p =NULL;
    *p = 100;//0到255之间的内存编号是系统占用的 

    //野指针
    int * p1 = (int)0x1100;
     
    
    system("pause");
    return 0;
}
