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

int  main(){
    fast_io;
    string n;
    cin>>n;
    forn(i,n.size()){
        if(n[i] != '1' && n[i]!= '4'){
            cout<<"NO";
            return 0;
        }
    }

    if(n[0] != '1'){
        cout<<"NO";
        return 0;
    }

    int cont = 0;
    fore(i,1,n.size()){
        if(n[i] == '4'){
            cont++;
            if(cont == 3){
                cout<<"NO";
                return 0;
            }
        }else
            cont = 0;
    }
    cout<<"YES";
}