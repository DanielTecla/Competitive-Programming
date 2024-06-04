//https://codeforces.com/gym/105164/problem/G
#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define forn(i, n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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

void solve()
{
    int n;
    cin >> n;
    vi vect;
    unordered_set<int> inVect;
    forn(i, n)
    {
        int element;
        cin >> element;
        if (!(inVect.count(element) > 0))
        {
            vect.pb(element);
            inVect.insert(element);
        }
    }

    sort(all(vect));
    if (vect[0] != 1)
    {
        cout << "Alicius";
        return;
    }

    int count = 1;
    fore(i, 1, vect.size())
    {
        if (vect[i] - vect[i - 1] == 1)
            count++;
        else
            break;
    }

    if ((!(count & 1) && vect.size() - count > 0) || ((count & 1) && vect.size() - count == 0))
        cout << "Alicius";
    else
        cout << "Bobius";
}

int main()
{
    fast_io
    solve();
}