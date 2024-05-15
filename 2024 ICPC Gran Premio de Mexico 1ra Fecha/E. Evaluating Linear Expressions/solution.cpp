//https://codeforces.com/gym/105164/problem/E
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    for(int i = 0; i < k; i++){
        cout<<(i + 1)*a + b<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}