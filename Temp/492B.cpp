#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int mxL = 1e3;

int n;
ll l,a[mxL+1];
double r,temp;

int main(){
    cin >>n>>l;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    r = 0;
    sort(a,a+n);
    if(n == 1)
        r = max(a[0],l-a[0]);
    else{

        for(int j=1;j<n;j++){
            temp = a[j] - a[j-1];
            temp /= 2.0;
            if(r<temp)
                r = temp;
        }
        if(r<a[0])
            r = a[0];
        
        if(r<l-a[n-1])
            r = l-a[n-1];

    }
    cout << fixed << setprecision(9);
    cout << r ;
}