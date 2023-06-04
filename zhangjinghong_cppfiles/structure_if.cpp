#include<iostream>
using namespace std;

int main(){
    //单行if
   /* int score = 0;
    cout << "请输入一个分数："<<endl;
    cin >> score;
    cout << "您输入的分数是："<< score << endl;

    if(score > 600){
        cout << "分数大于600"<<endl;

    }*/
    //多行if
   /* int score = 0;
    cout << "请输入一个分数："<<endl;
    cin >> score;
    cout << "您输入的分数是："<< score << endl;

    if(score > 600){
        cout << "分数大于600"<<endl;
    }
    else{
    cout<< "分数小于600"<<endl;
    }*/
    //多条件
    int score = 0;
    cout << "请输入一个分数："<<endl;
    cin >> score;
    cout << "您输入的分数是："<< score << endl;

    if(score > 600){
        cout << "分数大于600"<<endl;
    }
    else if(score >500){
        cout<< "分数大于500"<<endl;
    }
    else if (score > 400){
        cout << "分数大于400"<<endl;
    }
    else{
        cout << "分数小于400"<< endl;
    }
    system("pause");
    return 0;

}
