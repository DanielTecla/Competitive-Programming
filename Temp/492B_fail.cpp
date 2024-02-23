#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;


using ll = long long;
const int mxV = 1000;

int n;
ll l,a[mxV+1],val,tp2;
double r,tp;

int main(){
    cin >>n>>l;
    for(int i = 0;i<n;i++)
        cin >>a[i];
    
    sort(a,a+n);

    r = 0;

    for(int j = 0;j<n;j++){
        if(j == 0){
            if(a[0] != 0)
                r = a[0];
            else if(n == 1)
                r = 1;
            else
                r = 0;
            
            continue;
        }else if( j == n-1){
            if(a[j] != l)
                tp2 = l - a[j];
        }

        tp = a[j]-a[j-1];
        tp /= 2.0; 
        
        if(j == n-1 && tp2>tp)
            tp = tp2;
            
           
        
        if(tp > r)
            r = tp;
        
        
    }
    cout << fixed << setprecision(9);
    cout << r ;
}