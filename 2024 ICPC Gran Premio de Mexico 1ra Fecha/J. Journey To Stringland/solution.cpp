//https://codeforces.com/gym/105164/problem/J
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

int getKpalindrome(int k, int l, int r, vector<vvi> &dp, string &s, int &type){
    if(k == 0) return 0;
    if (l >= r - type) return INT_MAX;
    if(r - l + 1 < k + type) return INT_MAX;
    if(dp[k/2][l][r] != -1) return dp[k/2][l][r];

    dp[k/2][l][r] = min(
        getKpalindrome(k, l+1, r, dp, s, type), min(
        getKpalindrome(k, l, r-1, dp, s, type),
        getKpalindrome(k-2, l+1, r-1, dp, s, type) + (s[l] == s[r] ? 0 : 1)
    ));

    return dp[k/2][l][r];
}

void solve(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int type = k & 1;
    
    if(type) k--;
    if(k == 0){ cout<<"0"; return; }
    vector<vvi> dp(k/2 + 1, vvi(n, vi(n, -1)));
    cout<<getKpalindrome(k, 0, n-1, dp, s, type);
}

int main() {
    fast_io
    solve();
}