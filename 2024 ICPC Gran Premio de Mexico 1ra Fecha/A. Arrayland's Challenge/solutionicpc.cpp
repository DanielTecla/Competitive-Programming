//https://codeforces.com/gym/105164/problem/A
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

int smallestDiff(int l, int r, vvi &dp, vi &vect){
    if(r - l == 0 ) return INT_MAX;
    if(dp[l][r] != -1) return dp[l][r];

    dp[l][r] = min(
        smallestDiff(l + 1, r, dp, vect), min(
        smallestDiff(l, r-1, dp, vect),
        abs(vect[l] - vect[r])
    ));

    return dp[l][r];
}

void solve(){
    int n; cin>>n;
    vi vect;
    int element;
    forn(i,n){
        cin>>element; 
        vect.pb(element);
    }
    vvi dp(n,vi(n,-1));

    int val = smallestDiff(0, n-1, dp, vect);
    int q; cin>>q;
    int l,r;
    while(q--){
        cin>>l>>r;
        cout<<dp[l-1][r-1]<<endl;
    }
}

int main() {
    fast_io
    solve();
}