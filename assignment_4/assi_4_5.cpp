#include<iostream>
#include<vector>
#define loop(i,n) for(int i=0; i<n; i++)
using namespace std;
vector<int> small(vector<int> &arr)
{
    int sm_=1e6;
    int sm2=1e6;
    loop(i,arr.size())
    {
        if(arr[i]<sm_)
        {
            sm_=arr[i];
        }
    }
    loop(i,arr.size())
    {
        if(arr[i]<sm2 && arr[i]>sm_)
        {
            sm2=arr[i];
        }
    }
    vector<int> arr2;
    arr2.push_back(sm2);
    arr2.push_back(sm_);
    return arr2;
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
    vector<int> ans;
    ans=small(arr);
    loop(i,2)
    {
        cout<<ans[i]<<" ";
    }
}