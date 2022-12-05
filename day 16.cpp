#include <iostream>
using namespace std;
int main()
{
    int a,sum=0,i,f,n;
    cout<<"enter any no. = ";
    cin>>n;
    for(i=1; i<n; i++)
    {
        a=n%i;
        if(a==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"perfect no.";
    }
    else
    {
        cout<<"not perfect no.";
    }
}
