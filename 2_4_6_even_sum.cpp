#include<iostream>
using namespace std;
int main()
{
    int a,x=0;
    for(a=1;a<=10;a++)
    {
        if(a%2==0)
        {
        x=x+a;
        cout<<"\n"<<a;
        }
    }
    cout<<"\n total:"<<x;
}