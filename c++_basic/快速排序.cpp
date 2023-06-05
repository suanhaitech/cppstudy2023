#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int part(int* r, int low, int hight)  //划分函数
{
	int i = low, j = hight, pivot = r[low]; //基准元素
	while (i < j)
	{
		while (i<j && r[j]>pivot) //从右向左开始找一个 小于等于 pivot的数值
		{
			j--;
		}
		if (i < j)
		{
			swap(r[i++], r[j]);  //r[i]和r[j]交换后 i 向右移动一位
		}
		while (i < j && r[i] <= pivot) //从左向右开始找一个 大于 pivot的数值
		{
			i++;
		}
		if (i < j)
		{
			swap(r[i], r[j--]);  //r[i]和r[j]交换后 i 向左移动一位
		}
	}
	return i;  //返回最终划分完成后基准元素所在的位置
}
void Quicksort(int* r, int low, int hight)
{
	int mid;
	if (low < hight)
	{
		mid = part(r, low, hight);  // 返回基准元素位置
		Quicksort(r, low, mid - 1); // 左区间递归快速排序
		Quicksort(r, mid+1, hight); // 右区间递归快速排序
	}
}
int main()
{
	int a[10001];
	int  N;
	cout << "请输入要排序的数据的个数： " << endl;
	cin >> N;
	cout << "请输入要排序的数据： " << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	Quicksort(a, 0, N - 1);
	cout << "排序后的序列为： " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
