#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=0;
    int s=1;
    int t=f+s;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==0 && j==0)
            {
                cout<<f;
            }
            else if(i==1 && j==0)
            {
                cout<<s<<" ";
                cout<<t<<" "; 
            }
            else if(i==1 && j==1)
            {}
            else
            {
                f=s;
                s=t;
                t=f+s;
                cout<<t<<" ";
            }
        }
         cout<<endl;
    }
}