#include<iostream>
using namespace std;
int main()
{
    int i,j,sp=41;
    for(i=1;i<=5;i++)
    {
        sp--;
        for(j=1;j<=sp;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
            cout<<"\n";
    }
    for(i=4;i>=1;i--)
    {
        sp++;
        for(j=1;j<=sp;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
            cout<<"\n";
    }
}