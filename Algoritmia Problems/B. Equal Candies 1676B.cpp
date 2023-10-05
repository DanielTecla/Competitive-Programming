#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(n) for(int i = 0; i < n; i++)
using ll = long long;
const int maxI = 1000;
const int maxC = 10e7;

using namespace std;

int t,n,is[maxI],min_,cont;

int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        min_ = maxC;
        cont = 0;
        for(int j=0;j<n;j++){
            cin>>is[j];
            min_ = min(min_,is[j]);
        }

        for(int k=0;k<n;k++){
            cont += is[k] - min_;
        }
        cout<<cont<<endl;
    }


}   