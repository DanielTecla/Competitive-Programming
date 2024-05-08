//https://codeforces.com/contest/1968/problem/B
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

typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef map<int, int> mii;

void solve(){
    int n; cin>>n; int m; cin>>m;
    vector<char> vectn,vectm;
    forn(i,n){ char c; cin>>c; vectn.push_back(c); }
    forn(i,m){ char c; cin>>c; vectm.push_back(c); }
    lli sub_length = 0;
    
    for(int i = 0, j = 0; i < n && j < m; j++){ 
        if(vectn[i] == vectm[j]){ sub_length++; i++; } 
    }

    cout<<sub_length<<endl;
}

int main() {
    fast_io
    int t; cin>>t;
    while(t--)solve();
}