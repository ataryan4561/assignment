#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<8 && x%2!=0)
    {
        cout<<31<<endl;
    }
    else if(x<8 && x%2==0 && x!=2)
    {
        cout<<30<<endl;
    }
    else if(x==2)
    {
        cout<<28<<endl;
    }
    else if(x>=8 && x%2==0)
    {
        cout<<31<<endl;
    }
    else 
    {
        cout<<30<<endl;
    }
}