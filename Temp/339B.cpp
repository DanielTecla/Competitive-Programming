#include <iostream>

using namespace std;
using ll = long long;

const int mxM = 1e5;
ll ct;
int n,m,a[mxM],pt,p;

int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++)
        cin >> a[i];

    pt=0,ct=0,p=1;
    while(pt < m){
        if(p<a[pt]){
            ct += (a[pt]-p);
            p = a[pt];
        }else if(p > a[pt]){
            ct += n - (p-a[pt]);
            p = a[pt];
        }
        pt++;
    }

    cout << ct;
}