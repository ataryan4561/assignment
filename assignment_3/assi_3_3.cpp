#include<iostream>
using namespace std;
int power(int x,int n)
{
    int x1=x;
    while(n!=1)
    {
        x=x*x1;
        n--;
    }
    return x;
}
int main()
{
    int x;
    cin>>x;
    int n;
    cin>>n;
    int ans=power(x,n);
    cout<<ans<<endl;
}