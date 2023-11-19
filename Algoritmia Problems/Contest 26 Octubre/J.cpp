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

int reply(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    cout.flush();
    int res;
    cin>>res;
    return res;
}

void solve(){
    int n,p_a,p_b;
    cin>>n;

    vector<int> res(n+1,0);
    int pt = 1;
    fore(i,2,n+1){
        p_a = reply(pt,i);
        p_b = reply(i,pt);
        if(p_a>p_b){
            res[pt] = p_a;
            pt = i;
        }else res[i] = p_b;
    }
    res[pt] = n;
    cout<<"!";
    fore(i,1,n+1) cout<<" "<<res[i];
}

int  main(){
    fast_io;
    solve(); 
}