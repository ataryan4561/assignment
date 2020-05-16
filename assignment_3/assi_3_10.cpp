#include<iostream>
using namespace std;
int power3(int n)
{
    int n1=n;
    for(int i=1; i<3; i++)
    {
        n=n*n1;
    }
    return n;
}
bool check_armstrong(int n)
{
    int s=0;
    int n2=n;
    while(n!=0)
    {
        int g=n%10;
        s=s+power3(g);
        n=n/10;
    }
    if(s==n2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++)
    {
        bool res=check_armstrong(i);
        if(res==true)
        {
            cout<<i<<" ";
        }
    }
}