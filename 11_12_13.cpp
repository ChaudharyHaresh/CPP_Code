#include<iostream>
using namespace std;
int main()
{
    int i,j,x=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             x=x+1;
            cout<<""<<x;
        }
        x=x+5;
        cout<<"\n";
    }
}