#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n,x;
string text;
vector<string> s;

int main(){
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> text;
        s.push_back(text);
    }

    for(int i = 0; i < n ; i++){
        x = s[i].size();
        if( x <= 10 )
            cout << s[i] << "\n";
        else{
            text = s[i];
            cout << text[0] << x-2 << text[x-1] << "\n";
        }
    }
}