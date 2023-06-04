#include <iostream>
using namespace std;

int main ()
{
	float n,m;
        bool flag = true;

        cout << "注意，你有五次机会！" << endl;

	for ( int i = 0 ; i <5 ; i++ )
	{
	        cout << "请输入第一个数：";
	        cin >> n;
                cout << "请输入第二个输：";
	        cin >> m;
	
		
        	if ( n < m )
	        {
		        cout << "较大的数为：";
		        cout << m << endl;
	        }

        	if ( n > m )
        	{
		        cout << "较大的数为：";
		        cout << n << endl;
	        }
                if ( n == m )
		{
			cout << "请保证两个数不同" << endl;
		}
		else 
		       	break;
	}

	return 0;
}
