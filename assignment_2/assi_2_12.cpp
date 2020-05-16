#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    int nst=(rows/2)+1;
    int nsp=1;
    for(int r=1; r<=rows; r++)
    {
        for(int cst=1; cst<=nst; cst++)
        {
            cout<<"*";
        }
        for(int csp=1; csp<=nsp; csp++)
        {
            cout<<" ";
        }
        for(int cst=1; cst<=nst; cst++)
        {
            cout<<"*";
        }
        if(r<(rows/2)+1)
        {
            nst--;
            nsp=nsp+2;
        }
        if(r>=(rows/2)+1)
        {
            nst++;
            nsp=nsp-2;
        }
        cout<<endl;
    }
}