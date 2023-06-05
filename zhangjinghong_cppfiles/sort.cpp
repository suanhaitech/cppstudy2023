#include<iostream>
using namespace std;

class Sort{
public:
    void bubble_sort(int a[],int n);
    void select_sort(int a[],int n);
    void quick_sort(int a[],int low,int high);
};
//冒泡排序
void Sort::bubble_sort(int a[],int n){
    int temp;
    for(int i= 0;i<n-1;i++){
        for(int j = 0; j< n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
//选择排序
void Sort::select_sort(int a[],int n){
    for(int i = 0; i < n;i++){
        int index = i;
        int temp = a[i];
        for(int j = i+1;j < n ;j++){
            if(a[index] > a[j]){
                index = j;
            }

        }
        a[i] = a[index];
        a[index] = temp;
    }
}
//快速排序
void Sort::quick_sort(int a[],int low,int high){
    if(low>=high){
        return;//只有一个元素就返回
    }
    int i = low;//向右扫描
    int j = high;//向左扫描
    int key = a[low];//基准数
    while(i < j){
        while(a[j] >= key&& i<j){//右边找小于基准数的元素
            j--;
        }
        a[i]=a[j];//找到就赋值
        while(a[i] <= key&& i<j){
            i++;
        }
        a[j]=a[i];

    }
    a[i]=key;
    quick_sort(a,low,i-1);//对左子序列重复上面的操作
    quick_sort(a,i+1,high);//对右子序列重复上面的操作

}
int main(){
    Sort s1;
    int i,n;
    int a[100];
    cout << "Input n=";
    cin >> n;
    cout<< "请输入一组整数："<<endl;
    for(i =0 ; i< n; i++){
        cin >> a[i];
    }
    //n = sizeof(a)/sizeof(a[0]);
    //cout << "数组长度为"<<n<<endl;
    //s1.bubble_sort(a,n);
    //s1.select_sort(a,n);
    s1.quick_sort(a,0,n-1);
    for(int j = 0; j<n ;j++){
       cout <<a[j] <<" ";

    }
    return 0;

}
