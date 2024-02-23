#include <iostream>

using namespace std;

const int mxN = 1e6;

int n,a,b,sum,arr[mxN];

int main(){
    cin >> n;
    for (int i = 0; i<n ; i++)
        cin >> arr[i];

    cin >> a >> b;

    sum = 0;

    for(int i = a; i<=b;i++)
        sum += arr[i];
    
    cout << sum;
}