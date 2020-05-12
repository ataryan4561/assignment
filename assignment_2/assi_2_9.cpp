#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int fac=1;
    while(n!=1)
    {
        fac=fac*n;
        n-=1;
    }
    return fac;
}
int combi(int n,int r)
{
     return (fact(n)/(fact(n-r)*fact(r)));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<combi(i,j)<<" ";
        }
        cout<<endl;
    }
}