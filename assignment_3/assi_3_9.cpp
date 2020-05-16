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
int main()
{
    int n;
    cin>>n;
    int s=0;
    int n2=n;
    while(n!=0)
    {
        int g=n%10;
        // cout<<g<<endl;
        s=s+power3(g);
        n=n/10;
    }
    // cout<<s<<endl;
    if(s==n2)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong Number"<<endl;
    }
}