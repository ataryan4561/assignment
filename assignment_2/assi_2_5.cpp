#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int f=0;
    int s=1;
    int t;
    if(n>=f)
    {
        cout<<f<<" ";
    } 
    if(n>=s)
    {
        cout<<s<<" "; 
    }
    t=f+s;
    while(n>=t)
    {
        cout<<t<<" ";
        f=s;
        s=t;
        t=f+s;
    }
}