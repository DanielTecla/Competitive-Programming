//https://codeforces.com/gym/104603/problem/F
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
    int t; cin>>t;
    int w,l; cin>>w>>l;
    int tx,ty; cin>>tx>>ty;

    vector<double> vectA;
    vector<double> vectR;
    forn(i,t){
        int x,y; cin>>x>>y;
        double distance = sqrt((x - tx)*(x - tx) + (y - ty)*(y - ty));
        vectA.push_back(distance);
    }
    forn(i,t){
        int x,y; cin>>x>>y;
        double distance = sqrt((x - tx)*(x - tx) + (y - ty)*(y - ty));
        vectR.push_back(distance);
    }
    
    sort(all(vectA));
    sort(all(vectR));

    int count = 0;
    if(vectA[0] < vectR[0]){
        forn(i,t){
            if(vectA[i] < vectR[0]) count++;
            else break;
        }
        cout<<"A "<<count;
    }else{
        forn(i,t){
            if(vectR[i] < vectA[0]) count++;
            else break;
        }
        cout<<"R "<<count;
    }

}

int main() {
    fast_io
    solve();
}