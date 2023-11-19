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


void solve(){
    int  n,cont = 0;
    cin>>n;
    vector<int> lot{100,20,10,5};
    forn(i,lot.size()){
        if(n != n%lot[i]){
            cont += n/lot[i];
            n %= lot[i];
        }
    }
    cont += n;
    cout<<cont<<endl;
}

int  main(){
    fast_io;
    solve();
}