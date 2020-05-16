#include<iostream>
using namespace std;
bool restochar(char ch)
{
    int ch1=ch;
    if(ch1>=65 && ch1<=90)
    {
        return true;
    }
    if(ch1>=97 && ch<=122)
    {
        return false;
    }
}
int main()
{
    char ch;
    cin>>ch;
    bool rese=restochar(ch);
    if(rese==true)
    {
        cout<<"Upper Case";
    }
    if(rese==false)
    {
        cout<<"Lower Case";
    }
}