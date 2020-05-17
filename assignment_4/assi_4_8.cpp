#include<iostream>
#include<vector>
#include <string> 
using namespace std;
int addString(string str1,string str2)
{
     int m1 = stoi(str1); 
     int m2 = stoi(str2); 
     return m1+m2;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int ans=addString(str1,str2);
    cout<<ans<<endl;
}