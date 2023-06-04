#include<iostream>  
#include <iomanip>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i < 10; i++){
        for (j = 1; j <= i; j++){
            cout << j << "×" << i << " = " << setw(2)<<i *j << "  ";
        }
        cout << endl<<endl;
    }
}
