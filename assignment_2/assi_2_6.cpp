#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=0;
    int s=1;
    int t;
    cout<<f<<" "<<s<<" ";
    for(int i=2; i<n; i++)
    {
        t=f+s;
        cout<<t<<" ";
        f=s;
        s=t;
    }
}