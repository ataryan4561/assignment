#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    int nst=1;
    int nsp=(rows/2);
    for(int r=1; r<=rows; r++)
    {
        for(int csp=1; csp<=nsp; csp++)
        {
            cout<<" ";
        }
        for(int cst=1; cst<=nst; cst++)
        {
            cout<<"*";
        }
        // cout<<nsp<<" "<<nst<<endl; 
        if(r<(rows/2)+1)
        {
            nst=nst+2;
            nsp--;
        }
        if(r>=(rows/2)+1)
        {
            nst=nst-2;
            nsp++;
        }
        cout<<endl;
    }
}