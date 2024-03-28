// https://codeforces.com/gym/104412/problem/M
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

typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef map<int, int> mii;

typedef unordered_map <int,int> unmii;

// debug nodes
    // fore(i,1,sizeGraph + 1){
    //     cout << "Node " << i << " have relations with: ";
    //     forn(j, 2){
    //         cout<<graphR[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

void dfs(vvi &graphR,int node, vector<bool> &visited,unmii &totalVisit, bool &lose){
    if(visited[node] == true || lose == true) return;
    visited[node] = true;
    
    if(totalVisit.count(node) > 0){
        if(totalVisit[node] == 2){ lose = true; return; }
        totalVisit[node]++;
    }else totalVisit[node] = 1;
    
    vector<int> elements = graphR[node];
    for(auto &element: elements){
        dfs(graphR, element, visited, totalVisit, lose);
    }
}

void solve(){
    int sizeGraph; cin>>sizeGraph;
    vvi graphR(sizeGraph + 1, vector<int>());
    vvi graph{1,{0}};
    vector<char> ans;

    fore(i,1,sizeGraph + 1){ 
        vector<int> asks;
        forn(j,2){ 
            int element; cin>>element; 
            graphR[element].push_back(i); asks.push_back(element);
        }
        graph.push_back(asks);
    }

    fore(i,1,sizeGraph + 1){
        unmii totalVisit;
        bool lose = false;
        vector<int> elements{i,graph[i][0],graph[i][1]};
        for(auto &element: elements){
            vector<bool> visited (graph.size(),false);
            if(element != i) visited[i] = true;
            dfs(graphR,element,visited,totalVisit, lose);
        }
        if(lose) cout<<"Y";
        else cout<<"N";
    }
}

int main() {
    fast_io
    solve();
}