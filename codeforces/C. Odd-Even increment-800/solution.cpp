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

int main() {
    fast_io
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi arr(n);

        int even1 = 0, odd1 = 0, even2 = 0, odd2 = 0;
        forn(i,n){
            cin>> arr[i];
            if(i % 2 == 0){
                if(arr[i] % 2) odd1++;
                else even1++; 
            }else{
                if(arr[i] % 2) odd2++;
                else even2++;
            }
        }

        if(even1 && odd1) cout<<"NO"<<endl;
        else if(even2 && odd2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}