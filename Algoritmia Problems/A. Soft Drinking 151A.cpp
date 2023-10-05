#include<iostream>
 
using namespace std;
 
int main(){
    int n,k,ml,l,r,g,x,y;
    
    cin >>n>>k>>ml>>l>>r>>g>>x>>y;
 
    int ml_totales=k*ml;
    int r_totales=l*r;
    int salsa=g/y;
 
    ml_totales/=x;
    
    
 
    int tragos_lt = min(ml_totales,salsa);
    tragos_lt = min(tragos_lt,r_totales);
 
    cout <<tragos_lt/n;
    return 0;
}