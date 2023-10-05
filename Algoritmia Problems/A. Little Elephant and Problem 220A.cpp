#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(n) for(int i = 0; i < n; i++)
using ll = long long;


using namespace std;


const int mxN = 1e5;

int n,cont,p1,p2;
ll a[mxN],a_[mxN];
int main(){

    cin >> n;
    f(n)
        cin>>a[i];

    f(n)
        a_[i] = a[i];

    sort(a,a+n);

    cont = 0;
    f(n){
        if(a[i]!=a_[i])
            cont++;
    }
    
    if(cont>=3)
        no;
    else
        yes;
    
}