#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(a,n) for(int i = a; i <= n; i++)
using ll = long long;

using namespace std;

int t,cont;
ll value,stp;

int main(){
    cin >>t;
    while(t--){
        cin >>value;
        stp = value/2;
        cont = 0;
        f(2,stp){
            if(value%i == 0){
                cont++;
                if(cont>1){
                    no;
                    continue;
                }
            }
        }
        if(cont =! 0)
            yes;
    }
}
