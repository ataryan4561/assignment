#include<iostream>
using namespace std;
int ftoc(int f)
{
    return (5/9.0)*(f-32); 
}
int main()
{
    int f;
    cin>>f;
    int ans=ftoc(f);
    cout<<ans<<endl;
}