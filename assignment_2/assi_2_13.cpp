#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    int nsp=rows-1;
    int nst=1;
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
        }
        cout<<endl;
        nsp--;
        nst=nst+2;
    }
}