#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int t;

void solve(int t){
    int s,d,k,p,q,c;
    p = q =  c = 0;
    cin >> s >> d >>k;

    cout<<"Case #"<<t<<": ";

    p+=s*2;
    p+=d*2; 
    q += s;
    q += 2*d;
    c += s;
    c += 2*d;
    if(c<k || q<k || p<k+1){
        no;
        return;
    }

    yes;
    return;
}

int main(){
    cin>>t;

    for(int i = 1;i<=t; i++)
        solve(i);

    
}
