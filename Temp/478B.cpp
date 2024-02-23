#include <iostream>

using namespace std;

using ll = long long;
int n,m;
ll mint,maxt,tp,ne,n_;

ll sum(ll r){
    r -= 1;
    r = (r*(r+1))/2;
    return r;
}

int main(){
    cin >>n>>m;

    if(m == 1)
        mint = maxt = sum(n);
    else{
        //max of friends
        tp = m-1;
        maxt = sum(n-tp);

        //min of friends
        tp = n%m;
        ne = n/m;
        if(tp == 0)
            mint = m*sum(ne);
        else if(ne == 1)
            mint = tp;
        else{
            n_ = m - tp;
            mint = n_*sum(ne);
            mint += tp*sum(ne+1);
        }

    }

    cout <<mint<< " " <<maxt; 
}