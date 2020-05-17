#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==42)
        {
            count++;
        }
    }
    cout<<count<<endl;
}