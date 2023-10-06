#include<iostream>
using namespace std;
int main()
{
    int i,n,a=1;;
    cout<<"\n n::";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<a*i;
        a=a+a;
    }
}