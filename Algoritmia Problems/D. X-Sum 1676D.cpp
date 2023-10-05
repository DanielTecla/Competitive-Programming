#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(n) for(int i = 0; i < n; i++)
using ll = long long;
const int MaxL = 200;

using namespace std;

ll dfs(int n,int m,int row,int colum,int arr[MaxL][MaxL]){
    ll contador = 0;
    contador += arr[row][colum];
    int r,c;
    r = row - 1;
    c = colum - 1;
    while(r>=0 && c>=0 ){
        contador += arr[r][c];
        r--;
        c--;
    }
    r = row - 1;
    c = colum + 1;
    while(r>=0 && c<m ){
        contador += arr[r][c];
        r--;
        c++;
    }
    r = row + 1;
    c = colum - 1;
    while(r<n && c>=0 ){
        contador += arr[r][c];
        r++;
        c--;
    }
    r = row + 1;
    c = colum + 1;
    while(r<n && c<m ){
        contador += arr[r][c];
        r++;
        c++;
    }
    
    return contador;
}

int main(){
    int n,m,t,arr[MaxL][MaxL];
    cin>>t;
    ll cont,tot;
    for(int i=0; i<t ;i++){
        cin>>n>>m;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++)
                cin>>arr[j][k];
        }
        cont = 0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                tot = dfs(n,m,j,k,arr);
                cont = max(cont,tot);
            }
        }
        cout<<cont<<endl;
    }
}   