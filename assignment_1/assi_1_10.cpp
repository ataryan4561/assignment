#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x==y && x==z)
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if ((x==y && x!=z ) ||(x==z && x!=y) || (y==z && y!=x))
    {
        cout<<"Isosceles Triangle"<<endl;
    }
    else 
    {
        cout<<"Scalene Triangle"<<endl;
    }
}