#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n,days,t;

int main(){
    cin >>n;
    vector<int> d(n);

    for(int i=0; i<n ; i++){
        cin >> d[i];
    }
    days = 1;
    t = 0;
    for(int i=0;i<n-1;i++){
        if(d[i+1]>=d[i])
            days++;
        else{
            t = max(days,t);
            days = 1;
        }
    }

    t = max(days,t);

    cout<<t;
}