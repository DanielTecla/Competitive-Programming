#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
const int mxA = 1e5;
 
ll a[mxA],v1,v2;
int n,p1,p2,ct;
bool sign;
 
int main(){
    cin >>n;
    for(int i=0;i<n;i++)
        cin >>a[i];
 
    p2 = p1 = -1;    
    v1 = 1e9+1;
 
    if(n != 1){
        for(int i=1;i<n;i++)
        if(a[i-1]>a[i] && a[i]<v1){
            p1 = i;
            v1 = a[i];
        }
    }
    ct = v2 = 0;

    if(p1 != -1){
        for(int i=1;i<n;i++){
            if(i < p1){
                if(a[i]<a[i-1]){
                    v2 = a[i-1];
                    p2 = i-1;
                    ct++;
                    sign = true;
                }
            }else if(i == p1){
                if(ct == 0 && i >= 2){
                    if(a[i]<=a[i-2])
                        sign = false;
                    else
                        sign = true;
                }else if(i == 1 && n > 2){
                    if(a[i-1]<=a[i+1]){
                        sign = true;
                    }
                }else if(n == 2 && a[i]<a[i-1]){
                    sign = true;
                }
            }else if(i > p1 && v2>a[i])
                sign = false;
        }

        if(p2 == -1 && sign == true)
            p2 = p1-1;
        
    }
    /*
    for(int i=1;i<n;i++){
            if(i<=p1){
                if(a[i]<a[i-1] && i != p1){
                    p2 = i-1;
                    v2 = a[i-1];
                    sign = true;
                }
            }else
                if(v2>a[i])
                    sign = false;
        }
        if(p2 == -1){
            sign = true;
            p2 = p1-1;
        }
    */
 
    if(p1 == -1)
        cout <<"yes\n"<<"1 1";
    else if(sign == false || ct >= 2)
        cout <<"no";
    else
        cout <<"yes\n"<<p2+1 <<" " <<p1+1;
 
}
