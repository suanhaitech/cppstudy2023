#include <iostream>
using namespace std;

int main ()
{
	int a [4][5] =
	{ {1,1,1,1,1},
          {2,2,2,2,2},
	  {3,3,3,3,3},
	  {4,4,4,4,4},
	};

	for ( int i = 0; i < 4; i++ )
		for ( int j = 0; j < 5; j++ )
		{
			cout << "a[" << i << "][" << j << "]:";
			cout << a[i][j] << endl;
		}
        
	return 0;
}
