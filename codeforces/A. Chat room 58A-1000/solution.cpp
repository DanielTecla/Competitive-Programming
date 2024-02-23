#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int  main(){
    fast_io;
    string in;
    stack<char> say({'o','l','l','e','h'});
    cin>>in;
    for(auto i: in){
        if(!say.empty() && i == say.top()) say.pop();
        else if(say.empty()) break;
    } 

    if(say.empty()) cout<<"YES";
    else cout<<"NO";
}