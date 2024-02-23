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

const int mxA = 100;

int a[mxA];

int  main(){
    fast_io;
    int n,m;
    cin>>n >>m;
    
    forn(i,n) cin>>a[i];

    if(n==1){
        cout<<"1";
        return 0;
    }
    
    int r = n,k;
    int i = 0;
    while( r > 1){
        k = 0;
        if(a[i] != 0)k = a[i] - m;
        if(k <= 0 && a[i] != 0){
            a[i] = 0;
            r--;
        }else if(k>0) a[i] = k;
        i++;
        if(i>=n) i = 0;
    }
    forn(i,n){
        if(a[i] != 0){
            cout<<i+1;
            break;
        }
    }
}