#include<iostream>
#include<vector>
using namespace std;
bool palindrome(string str)
{
    int a=str.size();
    for(int i=0; i<a/2; i++)
    {
        if(str[i]!=str[a-i-1])
        {
            // cout<<str[i]<<"--"<<str[a-i-1]<<endl;
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    bool res=palindrome(str);
    if(res==0)
    {
        cout<<"Not a Palindrome";
    }
    if(res==1)
    {
        cout<<"Palindrome";
    }
}