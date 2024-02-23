#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(n) for(int i = 0; i < n; i++)
using ll = long long;
const int MaxR = 10e4;
using namespace std;

int t,rt[MaxR];

int main(){
    cin >> t;
    for(int i=0;i<t;i++)
        cin>>rt[i];

    for(int i=0;i<t;i++){
        if(rt[i]<=1399)
            cout<<"Division 4"<<endl;
        else if(1400<= rt[i] && rt[i]<=1599)
            cout<<"Division 3"<<endl;
        else if(1600 <= rt[i] && rt[i]<=1899)
            cout<<"Division 2"<<endl;
        else
            cout<<"Division 1"<<endl;
    }
}