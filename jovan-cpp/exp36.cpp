#include <iostream>
using namespace std;
 
void QuickSort(int *arr, int start, int end)
{
	if (start >= end)
		return;
	int i = start;
	int key = arr[i];
	int j = end;
	while (i < j)
	{
		while (i < j&&key <= arr[j])
		{
			j--;
		}
		if (i < j)
			arr[i++] = arr[j];
		while (i<j&&key>=arr[i])
		{
			i++;
		}
		if (i < j)
			arr[j--] = arr[i];
	}
	arr[i] = key;
	QuickSort(arr, start, i - 1);
	QuickSort(arr, i + 1, end);
}
int main()
{
	int array[10] = { 5, 3, 9, 16, 28, 0, 4, 7, 29, 44 };
	QuickSort(array, 0, 9);
	for (int i = 0; i < 9; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}
