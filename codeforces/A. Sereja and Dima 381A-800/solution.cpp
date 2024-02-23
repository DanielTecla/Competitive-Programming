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

const int MxA = 1000;

int ar[MxA];
int res[2];

void solve(){
    int n;
    cin>> n;
    forn(i,n) cin>>ar[i];
    int i = 0,j = n - 1;
    res[0] = res[1] = 0;
    int k = 0;
    while(n--){
        if(ar[i]>ar[j]){
            res[k] += ar[i];
            i++;
        }else{
            res[k] += ar[j];
            j--;
        }

        if(k == 0) k = 1;
        else k = 0;
    }
    cout<<res[0]<<" "<<res[1]<<endl;
}

int  main(){
    fast_io;
    solve();
}