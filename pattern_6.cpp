#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a%2==1)
            {
                cout<<" 1 ";
                a++;
            }
            else
            {
                cout<<" 0 ";
                a++;
            }
             
        }
        cout<<"\n";
    }
}