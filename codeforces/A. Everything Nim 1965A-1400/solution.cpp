//https://codeforces.com/contest/1965/problem/A
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
    int n; cin>>n;
    vll vect;
    unordered_set<int> values;
    forn(i,n){ 
        ll element; cin>>element;
        if(values.count(element) == 0){
            vect.pb(element);
            values.insert(element);
        }    
    }
    sort(all(vect));
    if(vect[0] != 1){ 
        cout<<"Alice"<<endl; 
        return; 
    }
    
    int count = 1;
    fore(i, 1 , vect.size()){ 
        if(vect[i] - vect[i - 1] == 1) count++; 
        else break; 
    }
    
    if((!(count & 1) && vect.size() - count > 0) || ((count & 1) && vect.size() - count == 0)) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}

int main() {
    fast_io
    int t; cin>>t;
    while(t--) solve();
}