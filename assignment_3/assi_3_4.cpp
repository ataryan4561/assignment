#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    bool res=prime(n);
    if(res==0)
    {
        cout<<"True"<<endl;
    }
    else 
    {
        cout<<"False"<<endl;
    }
}