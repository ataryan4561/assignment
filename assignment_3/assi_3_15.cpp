#include<iostream>
using namespace std;
int ftoc(int fart)
{
    return (5/9.0)*(fart-32);
}
int main()
{
    int start,end,step;
    cin>>start>>end>>step;
    for(int i=start; i<=end; i=i+step)
    {
        cout<<i<<" : "<<ftoc(i)<<endl;
    }
}