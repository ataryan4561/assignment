#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    int nsp=rows-1;
    int nst=1;
    rows=rows*2-1;
    for(int r=1; r<=rows; r++)
    {
        int num=0;
        for(int csp=1; csp<=nsp; csp++)
        {
            cout<<" ";  
        }
        for(int cst=1; cst<=nst; cst++)
        {
            if(cst<=(nst/2))
            {
                cout<<r+num;
                num++;
            }
            if(cst>(nst/2))
            {
                cout<<r+num;
                num--;
            }
            nst=nst+2;
            nsp--;
            cout<<endl;
        }
        
    }
}