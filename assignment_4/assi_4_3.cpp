#include<vector>
#include<iostream>
#define loop(i,n) for(int i=0; i<n; i++)
using namespace std;
bool issort(vector<int> &arr)
{
    int flag=0;
    loop(i,arr.size()-1)
    {
        if(arr[i]<arr[i+1])
        {
            flag=1;
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    loop(i,n)
    {
        cin>>arr[i];
    }
    bool res=issort(arr);
    if(res==true)
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not Sorted"<<endl;
    }   
}