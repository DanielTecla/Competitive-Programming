#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int mxA = 1e5;

bool vef;
int n,p1,p2,cont;
ll a[mxA],start,end_;

int main(){
    cin >>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cont = -1;

    end_ = start = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1] && start == 0){
            start = a[i];
            p1 = i;
            end_ = a[i+1];
            p2 = i+1;
            cont = 1;
        }else if(a[i]>a[i+1] && cont == 1){
            end_ = a[i+1];
            p2 = i+1;
            if(p1 != 0 && a[p2]<a[p1-1]){
                cout <<"no"<<endl;
                return 0;
            }
        }else if(a[i]<a[i+1] && cont == 1){
            if(a[p1]>a[i+1]){
                cout <<"no"<<endl;
                return 0;
            }else{
                cont = 2;
            }
        }else if(cont == 2 && a[i]>a[i+1]){
            cout <<"no"<<endl;
            return 0;
        }
    }
    if(start)
        cout <<"yes\n"<<p1+1<<" "<<p2+1;
    else
        cout <<"yes\n1 1";

}