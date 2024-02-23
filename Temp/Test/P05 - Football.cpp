#include <iostream>
#include <string>

using namespace std;


int x,y;
string t;

int main(){
    cin >> t;
    x = 0;
    y = 0;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == '1'){
            x += 1;
            y = 0;
        }else{
            y += 1;
            x = 0;
        }

        if(x >= 7 || y >= 7)
            break;
    }
    if(x >= 7 || y >= 7)
        cout << "YES"; 
    else
        cout << "NO";
}