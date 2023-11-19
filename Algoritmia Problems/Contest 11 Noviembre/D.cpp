#include<bits/stdc++.h>
using namespace std;

const int INF=1e9+1;
void solve()
{
    string s; cin>>s;
    unordered_map<char,int> cubeta;
    for(int i=0;i<s.length();i++)
    {
        if(cubeta.count(s[i])>0)
        {
            cubeta[s[i]]++;
        }
        else
        {
            cubeta[s[i]] = 1;
        }
    }

    int freci=0;
    for (auto [key, value]: cubeta) 
    {
        if(value%2==1)
            freci++;
    }

    if(freci%2==1 || freci==0)
        cout<<"First";
    else
        cout<<"Second";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}