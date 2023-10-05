#include <iostream>

using namespace std;

const int mxM = 1e3;

int n,m,k,a[mxM+1],t,temp;

/*Be careful with this problem is hard if you don't understand binary numbers
bitwise operators
not my code*/
int main(){
    cin >>n >>m>>k;
    for(int i=0;i<=m;i++)
        cin >>a[i];

    t = 0;

    for(int i = 0;i<m;i++){
        temp = 0;
        for(int j=0;j<n;j++)
            if(((a[i] >> j) & 1) != ((a[m] >> j) & 1))
                temp++;
        if(temp<=k)
            t++;
    }
    cout <<t;
}