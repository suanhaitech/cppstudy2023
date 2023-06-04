#include <iostream>
using namespace std;

//创建一个排序函数
void paixu (int array[] , int n)
{
	//第一层循环代表需要做 n 次历遍
	for (int i = 0; i < n - 1; i++) 
	{
		//第二层循环代表每次历遍都需要两两比较(n - 历遍数 -1)次
		for (int j = 0; j < n - i - 1; j++)
		{
			//前后两个数判断大小，如果前一个数比后一个数大，则交换
			if ( array[j] > array[j + 1] )
			{
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
}
//主函数
int main ()
{
	int n,m;

	cout << " 清输入需要排序的元素个数：" ;
	cin >> n;

        //为数组限定大小
	int array[n];

        //循环输入数组元素
	for ( int i = 0; i < n ; i++ )
	{
		cout << "请输入第 " << i+1 << " 个数: ";
                cin >> m;
		array[i] = m;
	}

        //利用函数重排数组元素
	paixu (array , n );

        //检索重排后数组的每个元素
	for ( int j = 0; j < n ; j++ )
	{
		cout << "从小到大排序后第 " << j+1 << " 个数： ";
		cout << array[j] << endl;
        }

	return 0;
}
