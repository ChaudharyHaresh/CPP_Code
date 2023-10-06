#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n a:";
    cin>>a;
    cout<<"\n b:";
    cin>>b;
    cout<<"\n c:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"\n a is bigger";
    }
    else
    {
        if(b>c)
        {
            cout<<"\n b is bigger";
        }
        else
        {
            cout<<"\n c is bigger";
        }
    }
}