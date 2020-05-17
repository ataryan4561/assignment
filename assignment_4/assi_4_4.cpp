#include<iostream>
#include<vector>
using namespace std;
int maxi(vector<int> &arr)
{
    int max=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans=maxi(arr);
    cout<<ans<<" ";
    cout<<endl;
}