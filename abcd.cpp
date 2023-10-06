#include<iostream>
using namespace std;
int main()
{
    int i,j,x=96;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=4;j++)
        {
             x=x+1;
             if(i==3)
            cout<<""<<(char)(x-32);
            else
            cout<<""<<(char)(x);
        }
        cout<<"\n";
    }
}