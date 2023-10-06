#include<iostream>
using namespace std;
int main()
{
    int i,j,a=97;
    i=1;
    do
    {
        j=1;
        do
        {
            if(i%2==0)
            {
                cout<<"\t"<<(char)(a-32);
                a++;
            }
            else
            {
                cout<<""<<(char)(a);
                a++;
            }
            j++;
            
        }while(j<=i);
        i++;
        cout<<"\n";
        
    }while(i<=5);
}