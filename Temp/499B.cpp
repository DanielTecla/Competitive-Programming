#include<bits/stdc++.h>

using namespace std;

int n,m;

vector<string>lct;
vector<vector<string>>words;
string wrd;

int main(){
    cin>>n>>m;

    for(int i=0;i<m;i++){
        vector<string>w;
        cin >>wrd;
        w.push_back(wrd);
        cin >>wrd;
        w.push_back(wrd);

        words.push_back(w);
    }

    for(int i=0;i<n;i++){
        cin >> wrd;
        lct.push_back(wrd);
    }

    for(int j=0;j<n;j++){
        int k = 0;
        while(lct[j]!=words[k][0])
            k++;
        if(words[k][0].size()>words[k][1].size())
            cout <<words[k][1]<<" ";
        else
            cout <<words[k][0]<<" ";
    }

}