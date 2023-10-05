#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int mxT = 2e4;

int t;
ll tc[mxT][5],i1,i2,d1,d2,temp;

int main(){
    cin >>t;
    for(int i=0;i<t;i++){
        for(int j=0;j<5;j++)
            cin >>tc[i][j];
    }

    for(int i = 0;i<t;i++){
        if((tc[i][0]-tc[i][2] + tc[i][1]-tc[i][3])<=tc[i][4])
            cout << tc[i][2]*tc[i][3]<<endl;
        else{
            i1 = tc[i][0]-tc[i][2];
            d2 = tc[i][1]-tc[i][3];
            temp = i1 - tc[i][4];

            if(temp == 0){
                i1 = tc[i][2];
                i2 = tc[i][1];
            }else if(temp>0){
                i1 = tc[i][2] + temp;
                i2 = tc[i][1];
            }else{
                i1 = tc[i][2];
                i2 = tc[i][1]+temp;
            }

            temp = d2 - tc[i][4];
            if(temp == 0){
                d2 = tc[i][3];
                d1 = tc[i][0];
            }else if(temp>0){
                d2 = tc[i][3] + temp;
                d1 = tc[i][0];
            }else{
                d2 = tc[i][3];
                d1 = tc[i][0]+temp;
            }


            cout <<min(i1*i2,d1*d2)<<endl;
        }
        
    }

}