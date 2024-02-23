//https://atcoder.jp/contests/abc212/tasks/abc212_c?lang=en
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

int const mxA = 2e5;

long long ArrN[mxA],ArrM[mxA];

void solve(){
    int n,m;
    cin>> n>> m;
    forn(i,n) cin>>ArrN[i];
    forn(i,m) cin>>ArrM[i];

    sort(ArrN,ArrN+n);
    sort(ArrM,ArrM+m);

    int i = 0, j = 0;

    ll min_ = 1e9; 
    ll temp;
    while(i<n && j<m){
        temp = abs(ArrM[j]-ArrN[i]);
        min_ = min(min_,temp);
        if(ArrM[j]>ArrN[i]) i++;
        else j++;
    }
    cout<<min_;
}

int  main(){
    fast_io;
    solve();    
}