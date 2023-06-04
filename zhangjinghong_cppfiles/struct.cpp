#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int age;
    int score; 
} s3;//创建机构体变量
int main(){
    struct Student s1;
    //给s1属性赋值
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    cout << "姓名："<<s1.name<<"年龄："<<s1.age<<"分数："<<s1.score;

    struct Student s2 = {"李四",19,99};
    cout << "姓名："<<s2.name<<"年龄："<<s2.age<<"分数："<<s2.score;
    s3.name="王五";
    s3.age = 26;
    s3.score = 98;
    cout << "姓名："<<s3.name<<"年龄："<<s3.age<<"分数："<<s3.score;


}
