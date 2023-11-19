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

void solution(){
    int row,column,l;
    fore(i,1,6){
        fore(j,1,6){
            cin>>l;
            if(l == 1){
                row = i;
                column = j;
                break;
            }
        }
    }
    int num = 0;
    num += abs(3 - column);
    num += abs(3 - row);
    cout<<num; 
}

int main(){
    fast_io;
    solution();
    return 0;
}