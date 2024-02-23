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

bool cells(vector<vector<char>> &grid,int rw, int cl){
    int cont = 1;
    char ck = grid[rw][cl];
    //Check Up
    if(rw>=1){
        if(grid[rw-1][cl] == ck){
            cont++;
            if(cl>0 && grid[rw][cl-1] == ck) cont++;
            else if(cl<4-1 && grid[rw][cl+1] == ck) cont++;
        }
    }
    if(cont == 3) return true;
    cont = 1;
    if(rw<4-1){
        if(grid[rw+1][cl] == ck){
            cont++;
            if(cl>0 && grid[rw][cl-1] == ck) cont++;
            else if(cl<4-1 && grid[rw][cl+1] == ck) cont++;
        } 
    }
    return (cont==3) ? true:false;
}

void solve(){
    vector<vector<char>> grid(4,vector<char>(4));
    forn(i,4){
        forn(j,4) cin>>grid[i][j];
    }
    forn(i,4){
        forn(j,4){
            if(cells(grid,i,j)){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
}

int  main(){
    fast_io;
    solve();
    
}