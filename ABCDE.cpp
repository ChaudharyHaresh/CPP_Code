#include<iostream>
using namespace std;
int main()
{
    int i,j,x=64;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             x=x+1;
            cout<<""<<(char)(x);
        }
        cout<<"\n";
    }
}