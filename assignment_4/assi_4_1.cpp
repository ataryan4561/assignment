#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define loop(i,n) for(int i=0; i<n; i++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    loop(i,n)
    {
        cin>>arr[i];
    }
    loop(i,n)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}