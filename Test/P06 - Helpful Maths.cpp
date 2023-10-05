#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int mxA = 100;

string s;
int a[mxA],ct;

int main(){
    cin >> s;
    ct  = 0;
    for(int i=0; i<s.size() ; i++){
        if(s[i] != '+'){
            a[ct] = s[i] - '0';
            ct++;
        }
    }

    sort(a,(a+ct));

    cout << a[0];
    for(int i=1 ; i<ct; i++)
        cout<< "+" << a[i];

}   