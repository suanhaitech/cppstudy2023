#include <iostream>
#include <string>
using namespace std;

int main()
{
	string greeting = "sanzhanmuhua,good";
	cout << greeting ;
	cout << "\n" ; //换行符
        string greeting2 = "sanzhanmuhua,\
			    good" ;//分隔符
	cout << greeting2 ;
	cout << "\n";
	return 0 ;
}
