//https://codeforces.com/contest/1948/problem/D
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

int longest(string &s, int &tam){
    int count = 0;
    for(int i = 0; i + tam*2 - count*2< s.size() + 1; i++){
        if(s[i] == '?' || s[i+tam] == '?' || s[i] == s[i+tam]) count++;
        else count = 0;

        if(count == tam) return tam;
    }

    return 0;
}

void solve(){
    string s; cin>>s;
    int size = s.size();
    
    if(size == 1){ cout<<"0"<<endl; return; }

    if(size & 1) size -= 1;

    int longe = 0;
    for(int i = size/2; i>0; i--){
        longe = longest(s,i);
        if(longe != 0){
            cout<<longe*2<<endl;
            return;
        }
    }
        
    
    cout<<"0"<<endl;
}

int main() {
    fast_io
    int t; cin>>t;
    while(t--) solve();
}