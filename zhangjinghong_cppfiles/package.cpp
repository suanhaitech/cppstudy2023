#include<iostream>
using namespace std;
const double PI=3.14;
//求圆的周长
class circle {
    //访问权限
public:
    //属性
    int m_r; 
    //行为
    double calculateZC()
    {
        return 2 * PI *m_r;
    };
};
int main(){
    //创建对象
    circle c1;
    //圆的属性赋值
    c1.m_r = 10;
    cout << "圆的周长："<<c1.calculateZC()<<endl;

}
