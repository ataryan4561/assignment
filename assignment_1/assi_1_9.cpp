#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y>z || x+z>y || y+z>x)
    {
        cout<<"Traingle Can Be Formed";
    }
    else 
    {
        cout<<"Not Possible Triangle";
    }
}