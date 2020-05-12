#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%5==0 && x%11==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}