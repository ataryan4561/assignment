#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double value10(double d) 
{ 
    return log10(d); 
}
int main()
{
    double n;
    cin>>n;
    double ans=value10(n);
    cout<<ans<<endl;
}