#include<iostream>
using namespace std;
int main()
{
    int a,b;
    
    cout<<"Enter the operation that you wanted to apply "<<endl;
    cout<<"+,-,/,*,% and X or x for exit"<<endl;
    char ch;
    cin>>ch;
    if(ch=='X' || ch=='x' )
    {
        exit(0);
    }
    else if(ch=='+')
    {
        cin>>a>>b;
        cout<<a+b;
    }
    else if(ch=='-')
    {
        cin>>a>>b;
        cout<<a-b;
    }
    else if(ch=='*')
    {
        cin>>a>>b;
        cout<<a*b;
    }
    else if(ch=='/')
    {
        cin>>a>>b;
        cout<<a/b;
    }
    else if(ch=='%')
    {
        cin>>a>>b;
        cout<<a%b;
    }
}
