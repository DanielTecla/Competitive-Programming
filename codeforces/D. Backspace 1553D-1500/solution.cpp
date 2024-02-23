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
void solve(){
    string s,t;
    cin>>s>>t;
    int n = s.size(), m = t.size();
    if(n<m){
        cout<<"NO"<<endl;
    }else{
        int i = n-1, j = m-1;
        while(j >= 0 && i >= 0){
            if(s[i] == t[j]){
                i--;
                j--;
            }else i-= 2;
        }
        if(j >= 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

int  main(){
    fast_io;
    int q;
    cin>>q;
    while(q--){
        solve();
    }

}