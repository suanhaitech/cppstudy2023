#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char str1[18] = "bilibili";
	char str2[18] = "niu bi";
	char str3[18];
	int len ;
        //str3复制str1的内容
	strcpy ( str3, str1 );
	cout << "复制：" << str3 << endl;
        //str2连接到str1
	strcat ( str1, str2 );
	cout << "连接：" << str1 << endl;
        //查看连接之后的str1的长度
	len = strlen ( str1 );
	cout << "长度：" << len << endl;

	return 0;
}
