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
    ll n,x;
    cin>>n>>x;
    if(n == 1){
        cout<<0<<endl;
        return;
    }else if(n == x){
        cout<<1<<endl;
        return;
    }else if((x*(x+1)/2)-(x-1)<n){
        cout<<-1<<endl;
        return;
    }
    x--;
    n--;
    ll l = 0, h = x;
    ll ans = (x*(x+1)/2);
    while(l<=h){
        ll mid = (l+h)/2;
        
        if(ans - (mid*(mid+1)/2) >= n) 
            l = mid + 1;
        else h = mid - 1;
    }

    cout<<x - h <<endl;
}   

int main() {
    fast_io
    solve();
    return 0;
}