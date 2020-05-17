#include<iostream>
#include<vector>
using namespace std;
void subseq(string ques , string ans)
{
    if (ques.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = ques[0];
    subseq(ques.substr(1), ans + ch);
    subseq(ques.substr(1), ans);
}
int main()
{
    string str;
    cin>>str;
    subseq(str,"");
}