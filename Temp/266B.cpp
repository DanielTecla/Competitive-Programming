#include <iostream>
#include <string>

using namespace std;

const int mxN = 50;

int n,t;
char q[mxN];

int main(){
    cin >> n >> t;
    for(int i = 0; i<n;i++)
        cin >> q[i];

    while(t--){
        for(int j = 0; j<n-1 ; j++){
            if(q[j] == 'B' && q[j+1] == 'G'){
                q[j] = 'G';
                q[j+1]= 'B';
                j++;
            }
        }
    }
    for(int i = 0;i<n;i++)
        cout << q[i];
}