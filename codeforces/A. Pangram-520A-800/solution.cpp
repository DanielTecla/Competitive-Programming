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

void solve(int n){
    unordered_set<char> s;
    string str;
    cin>> str;
    forn(i,n){
        if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z') s.insert(tolower(str[i]));
    }

    if(s.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    fast_io
    int n; cin >> n;
    solve(n);
}