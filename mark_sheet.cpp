#include<iostream>
using namespace std;
int main()
{
    float m,c,p,total,per;
    cout<<"maths :";
    cin>>m;
    cout<<"chemistry :";
    cin>>c;
    cout<<"physics :";
    cin>>p;
    total=(m+c+p);
    cout<<"total marks :"<<total;
    per=(total/3);
    cout<<"\n percentage :"<<per;
    if(m<35 || c<35 || p<35)
    {
        cout<<"\n fail";
    }
    else if(per>=75 && per<=100)
    {
        cout<<"\n a grade";
    }
     else if(per>=60 && per<=75)
    {
        cout<<"\n b grade";
    }
     else if(per>=45 && per<=60)
    {
        cout<<"\n c grade";
    }
     else if(per>=35 && per<=45)
    {
        cout<<"\n d grade";
    }
}