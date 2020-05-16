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
    int rows2=rows*2-1;
    int num2=rows-1;
    for(int r=1; r<=rows2; r++)
    {
        int num=0;
        for(int csp=1; csp<=nsp; csp++)
        {
            cout<<" ";  
        }
        for(int cst=1; cst<=nst; cst++)
        {
            if(cst<=(nst/2) && r<=rows)
            {
                cout<<r+num;
                num++;
            }
            if(cst>(nst/2) && r<=rows)
            {
                cout<<r+num;
                num--;
            }
            if(cst<=(nst/2) && r>rows)
            {
                cout<<num2+num;
                num++;
            }
            if(cst>(nst/2) && r>rows)
            {
                cout<<num2+num;
                num--;
            }
        }
        if(r>rows)
        {
            num2--;
        }
        if(r<(rows2/2)+1)
        {
        nst=nst+2;
        nsp--;
        }
        if(r>=(rows2/2)+1)
        {
            nst=nst-2;
            nsp++;
        }
        cout<<endl;
    }
}