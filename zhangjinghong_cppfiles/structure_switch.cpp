
#include<iostream>
using namespace std;

int main(){
    cout << "请给电影进行打分"<<endl;
    int score = 0;
    cin >> score;
    cout << "您打的分数为"<< score <<endl;
    switch(score){
        case 10:
            cout << "您认为是经典电影"<<endl;
            break;
        case 9:
            cout << "您认为是经典电影"<<endl;
            break;
        case 8:
            cout << "您认为电影很好"<<endl;
            break;
        case 7:
            cout << "您认为电影很好"<<endl;
            break;
        default :
            cout << "您认为电影不好"<<endl;
    
    }
    



    system("pause");
    return 0;
}

