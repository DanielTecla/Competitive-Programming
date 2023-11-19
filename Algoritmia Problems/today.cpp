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

const int maxSize = 100000;

void solve(int *a){
    int l,r;
    cin>>l>>r;
    if(l==r) cout<<a[l]<<endl;
    else{
        int count = 0;
        for(;l<=r;l++){
            count += a[l];
        }
        cout<<count<<endl;
    }
}

int  main(){
    fast_io;
    int n,q,a[maxSize+1];
    cin>>n;
    forn(i,n) cin>>a[i];

    cin>>q;

    while(q--){
        solve(a);
    }
}