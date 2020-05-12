#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#define loop(i,n) for(int i=0; i<n; i++)
#define even_loop(i,n) for(int i=0; i<n; i+=2)
#define odd_loop(i,n) for(int i=1; i<n; i+=2)
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll n1=n;
    ll n2=n;
    ll sum_o=0;
    ll sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    while(n1!=0)
    {
        sum_o+=n1%10;
        n1=n1/100;
    }
    cout<<"even="<<sum-sum_o<<endl;
    cout<<"odd="<<sum_o<<endl;
}