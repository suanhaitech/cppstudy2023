#include<iostream>
using namespace std;
int main(){
    //利用指针访问数组
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "第一个元素为："<<arr[0]<<endl;
    int * p = arr;//数组名就是数组的首地址
    p++;//指针向后偏移4个字节，访问第二个数据元素
    cout << *p<<endl;
    cout << "利用指针遍历数组"<<endl;
    int * p2 =arr;
    for (int i = 0 ; i< 10; i++){
        cout<< *p2 << endl;
        p2++;
    }
}
