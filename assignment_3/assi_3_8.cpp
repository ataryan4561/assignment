#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(10,0);
    while(n!=0)
    {
        int g=n%10;
        arr[g]++;
        n=n/10;
    }
    for(int i=0; i<10; i++)
    {
        cout<<i<<"= "<<arr[i]<<endl;
    }
}