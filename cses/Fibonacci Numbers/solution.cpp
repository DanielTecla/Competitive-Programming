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

const ll Mod = 1e9 + 7;

vvll base = {{1, 1}, {1, 0}}; // vector<vector<long long>>

vvll mul(vvll A, vvll B){
    vvll C(2, vll(2));
    forn(i, 2){
        forn(j, 2){ forn(k, 2){ C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % Mod; }
        }
    }
    return C;
}

vvll getMatrixn(ll n){
    vvll res;
    if(n == 1) return base;
    if(n & 1){
        res = getMatrixn((n - 1)/2);
        res = mul(res, res);
        res = mul(base, res);
    }else{
        res = getMatrixn(n/2);
        res = mul(res, res);
    }
    return res;
}

void solve(ll n){
    vvll res = getMatrixn(n);
    cout << res[0][1];
}

int main() {
    fast_io
    ll n; cin >> n;
    if(n == 0){cout<<0; return 0;}
    if(n == 1){cout<<1; return 0;}
    
    solve(n);

}