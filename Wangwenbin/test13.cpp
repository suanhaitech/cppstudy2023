#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int i,j;
        //设置种子
	srand( (unsigned) time (NULL) );
        //生成20个随机数
	for ( i = 0; i < 20; i++ )
	{
		j = rand(); //实际生成的随机数
	        cout << "随机数 " << i+1 <<": " << j << endl;
	}

	return 0;
}
