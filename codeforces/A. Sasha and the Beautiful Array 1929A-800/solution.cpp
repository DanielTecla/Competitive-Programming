// Problem: A. Sasha and the Beautiful Array (http://codeforces.com/contest/1929/problem/A)

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

void  solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll count = 0;
        vll elements(n);
        forn(i,n) cin>>elements[i];
        sort(all(elements));
        fore(i,1,n){
            count += elements[i] - elements[i-1];
        }
        cout<<count<<endl;
    }
}

int main() {
    fast_io
    solve();
}