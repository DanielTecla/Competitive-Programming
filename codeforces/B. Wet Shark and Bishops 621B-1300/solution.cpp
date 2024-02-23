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

void checkpair(vector<vector<int>> &grid, int x, int y, int &ans){
    for(int i = x+1,j = y - 1; i<1001 && j > 0; i++,j--){
        if(grid[i][j] == 1) ans++;
    }
    for(int i = x+1,j = y + 1; i<1001 && j < 1001; i++,j++){
        if(grid[i][j] == 1) ans++;
    }
}


void solve(){
    int n;
    cin>>n;
    int x,y;
    vector<vector<int>> grid(1001,vector<int>(1001,0));
    forn(i,n){
        cin>>x>>y;
        grid[x][y] = 1;
    }
    int ans = 0;
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(grid[i][j] == 1){
                checkpair(grid,i,j,ans);
            }
        }
    }

    cout<<ans<<endl;

}

int main() {
    fast_io
    solve();
    return 0;
}