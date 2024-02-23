#include <bits/stdc++.h>

using namespace std;

void solution(){
    int row,column,l;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>l;
            if(l == 1){
                row = i;
                column = j;
                break;
            }
        }
    }

    int num = 0;
    num += abs(3 - column);
    num += abs(3 - row);

    cout<<num; 
    
}

int main(){
    solution();
    return 0;
}