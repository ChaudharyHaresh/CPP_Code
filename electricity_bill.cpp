#include<iostream>
using namespace std;
int main()
{
    float a,c,d;
    cout<<" a:";
    cin>>a;
    if(a<101)
    {
        c=a*0.60+50;
        cout<<"\n electricity bill:"<<c;
    }
    else if(a>100 && a<301)
    {
        c=(a-100)*0.80+60+50;
        cout<<"\n ele bill:"<<c;
    }
    else if(a>300)
    {
        c=(a-300)*0.90+60+160+50;
        cout<<"\n mo bill:"<<c;
    }
    if(c>300)
    {
        d=c*0.15;
        cout<<"\n surcharge:"<<d;
        cout<<"\n total bill:"<<d+c;
    }
}