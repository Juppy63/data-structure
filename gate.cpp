#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    cout<<*(*(a+**a+2)+3);
}