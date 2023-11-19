#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int  main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int w;

    cin>>w;
    if(w%2 == 0 && w > 3){
        cout<<"YES";
    }else
        cout<<"NO";

    return 0;
}