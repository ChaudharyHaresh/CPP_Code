#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"\n enter ch:";
    cin>>a;
    if(a<='Z')
    cout<<a<<"-"<<(char)(a+32);
    else
    cout<<a<<"-"<<(char)(a-32);
}