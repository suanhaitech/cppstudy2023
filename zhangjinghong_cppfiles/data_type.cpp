#include<iostream>
using namespace std;
#include<string>
int main(){

    //sizeof关键字
    cout << "short 占用内存空间为："<< sizeof(short) << endl;
    int num1 = 10;
    cout << "num1 占用内存空间为："<< sizeof(num1) << endl;

    //浮点型
    float f1 = 3.1415926;
    cout << "f1 = "<< f1 << endl;
    double f2 = 3.1415926;
    cout << "f2 = "<< f2 << endl;

    //字符型
    char ch = 'a';
    cout << ch << endl;
    cout << "ch 占用内存空间为："<< sizeof(ch) << endl;
    cout << "输出对应的ASCII为"<< (int)ch << endl;

    //转义字符
    cout<< "hello\n"<<endl;//换行
    cout<< "\\"<<endl;//输出反斜杠
    cout << "hello\tword"<<endl;//水平制表

    //字符串
    char str[] = "Hello";
    cout << str << endl;
    string str2 = "Hello";
    cout << str2 << endl;

    //数据输入
    int a = 0;
    cout << "请给整型变量a赋值"<< endl;
    cin >> a;
    cout << "整型变量a="<< a <<endl;

    float f = 3.14f;
    cout << "请给浮点型变量f赋值" << endl;
    cin >> f;
    cout << "浮点型变量f=" << f << endl;

    char ch2 = 'a';
    cout << "请给字符型变量ch赋值" << endl;
    cin >> ch2;
    cout << "字符型变量f=" << ch2 << endl;




    system("pause");
    return 0;

}
