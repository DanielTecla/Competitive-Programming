#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;

int n,s[mxN],nc,num_t,n3,n2,n1;

int main(){
    cin >>n;
    n1,n2,n3,num_t = 0;

    for(int i=0;i<n;i++){
        cin >> nc;
        if(nc == 4)
            num_t++;
        else if(nc == 3)
            n3++;
        else if(nc == 2)
            n2++;
        else
            n1++;
    }

    nc = n1-n3;
    if(nc == 0){
        num_t += n1;
        n1 = 0;
    }else if(nc > 0){
        num_t += n3;
        n1 = nc;
    }else{
        num_t += n1;
        n3 = -1*nc;
        num_t += n3;
        n1 = 0;
    }

    if(n2 != 0 || n1 != 0){
        int sum;
        sum = n2*2;
        sum += n1;
        
        nc = sum/4;
        num_t += nc;

        nc = sum%4;
        if(nc != 0)
            num_t += 1;
    }
    
    cout <<num_t;


    
}