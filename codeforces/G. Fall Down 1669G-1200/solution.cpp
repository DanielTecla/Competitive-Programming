#include <bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define f(n) for(int i = 0; i < n; i++)
using ll = long long;
const int MaxRF = 50;

using namespace std;



void solution(int fr,int rw,int cl,char arr[MaxRF][MaxRF]){
    int row = rw;
    while(row<fr-1){
        if(arr[row+1][cl] == '.'){
            arr[row][cl] = '.';
            arr[row+1][cl] = '*';
        }else
            return;
        row++;
    }
}

int t,n,m;
int main(){
    char arr[MaxRF][MaxRF];
    cin>>t;
    while(t--){
        cin>>n>>m;
        //read
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        //Solution
        for(int i=n-2;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(arr[i][j]=='*')
                    solution(n,i,j,arr);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }

    }
}   