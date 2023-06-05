#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "请输入你的分数：" << endl;
	cin >> score;

	cout <<"你的分数为：" << score <<endl;

        if (score >= 600)
	{
		cout << "恭喜你考上一本大学"<< endl;
		if (score >= 700)
		{
			cout << "你能考上清华，北大"<< endl;
		}

		else if (score >= 650)
		{
			cout << "你能考上复旦，上交" << endl;
		}
	}

	else if (score >= 500)
	{
		cout << "恭喜你考上二本大学" << endl;
	}

	else if(score >= 400)
	{
		cout << "恭喜你考上三本大学" << endl;
	}

	else 
	{
		cout << "你未考上本科大学，请再接再厉"<< endl;
	}
	return 0;
}

