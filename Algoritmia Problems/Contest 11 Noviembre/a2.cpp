#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int isPalindromo(string time){
    int L=0, R=time.size()-1;
        while(L<=R){
        if(time[L] != time[R]){
            return 0;
        }
        L++;
        R--;
    }
    return 1;
}

void solve(){
    int r=0;
    string hr;
    int h,m;
    int salto;
    //15:15 10
    cin>>hr;
    cin>>salto;

    h = (hr[0] - '0') * 10;
    h += hr[1] - '0';
    //15:00

    h *= 60;

    m = (hr[3] - '0') * 10;
    m += hr[4] - '0';
    //00:15


    //915
    int totalMin = h+m;
    if(m == 1440){
        string hrS="", mnS="";

        hrS = to_string(totalMin/60);
        if(hrS.size() == 1){
            hrS = "0" + hrS;
        }
        mnS = to_string(totalMin%60);
        if(mnS.size() == 1){
            mnS = "0" + mnS;
        }
        string time = "";
        time = hrS + mnS;
        
        if(isPalindromo(time)){
            r++;
        }
        cout<<r<<endl;
        return;
    }else if(m == 1){
        cout<<16<<endl;
        return;
    }
    

    //23:59 -> 1439
    for(int i = totalMin + salto; i != totalMin; i+=salto){
        //15:15 -> 915 = totalMin
        //totalMin   -> (horas) + (minutos)
        //for();
        //string hrS = to_string(i/60)
        if(i>=1440){
            i = i - 1440;    
        }
        string hrS="", mnS="";

        hrS = to_string(i/60);
        if(hrS.size() == 1){
            hrS = "0" + hrS;
        }
        mnS = to_string(i%60);
        if(mnS.size() == 1){
            mnS = "0" + mnS;
        }

        string time = "";

        time = hrS + mnS;
        if(isPalindromo(time)){
            
            r++;
        }
        
        if(i == totalMin) break;
    }

    cout << r << endl;

}

int main(){
    fast_io;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
