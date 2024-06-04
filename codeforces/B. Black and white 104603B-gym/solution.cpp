//https://codeforces.com/gym/104603/problem/B
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
    vector<vector<char>> grid;
    forn(i,n){
        vector<char> vect;
        forn(j,n){
            char element;
            cin>>element;
            vect.push_back(element);
        }
        grid.push_back(vect);
    }
    int count = 0;
    forn(i,n){
        forn(j,n){
            if(grid[i][j] == 'N'){
                if(j < n - 1 && grid[i][j + 1] == 'N'){
                    count++;
                    grid[i][j] = 'B';
                    grid[i][j + 1] = 'B';
                }
            }
        }
    }
    cout<<count;
}

int main() {
    fast_io
    solve();
}