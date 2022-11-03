#include <iostream>
using namespace std;
int main()
{
    int a[5][6]={};
    int i = 1, j = 0, k = 0;
    a[0][1] = 1;
    for (i = 1; i < 5; i++)
    {   
        for (j = 1; j < 6; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (k=0;k<=5-i;k++)
        {
            cout<<" ";
        }
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] > 0)
            {
                cout << a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}