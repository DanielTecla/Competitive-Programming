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

const int mxT = 1e5;

void solver(){
    int t,data;
    long sx,sy,x,y,cont = 0;
    cin>> t>> sx>> sy>> x>> y;
    char tp;
    
    forn(i,t){
        cin>>tp;
        if(tp == 'N' && sy<y) sy++;
        else if(tp == 'S' && sy>y) sy--;
        else if(tp == 'E' && sx<x) sx++;
        else if(tp == 'W' && sx>x) sx--;
        cont ++;
        if(sx == x && sy == y){
            cout<<cont<<endl;
            return;
        }
        
    }

    cout<<"-1";


}

int  main(){
    fast_io;
    solver();
}