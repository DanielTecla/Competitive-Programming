#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (ll i = 0; i < n; i++)
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
    ll n,m,count=0,healing=0;
    priority_queue<ll> pq;
    cin>>n;
    forn(i,n){
        cin>>m;
        if(m>=0){
            count++;
            healing+=m;
        }else pq.push(m);
    }
    while(!pq.empty() && healing+pq.top()>=0){
        count++;
        healing+=pq.top();
        pq.pop();
    }
    cout<<count<<endl;
}

int main() {
    fast_io
    solve();
    return 0;
}