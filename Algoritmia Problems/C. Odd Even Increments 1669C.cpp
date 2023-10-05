#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(n) for(int i = 0; i < n; i++)
using ll = long long;
const int MaxA = 100*50;
using namespace std;

int t,arr[MaxA],first,second,n;

int main(){
    cin>>t;
    int cont;
    bool fpar,spar;
    while(t--){
        cin>>n;
        cont = 0;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        first = arr[0];
        second = arr[1];
        if(first%2==0)
            fpar = true;
        else
            fpar = false;
        
        if(second%2==0)
            spar = true;
        else
            spar = false;
        int i=2;
        while(i<n){
            if(i%2==0){
                if(fpar){
                    if(arr[i]%2 != 0){
                        no;
                        cont++;
                        break;
                    }
                }else{
                    if(arr[i]%2 == 0){
                        no;
                        cont++;
                        break;
                    }          
                }
            }else{
                if(spar){
                    if(arr[i]%2 != 0){
                        no;
                        cont++;
                        break;
                    }
                }else{
                    if(arr[i]%2 == 0){
                        no;
                        cont++;
                        break;
                    }
                }
            }
            i++;
        }
        if(cont == 0)
            yes;
        
    }
}