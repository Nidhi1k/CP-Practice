// link : https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vi>
#define vvl vector<vl>
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define all(a) a.begin(), a.end()
#define sum(a) accumulate(all(a), 0LL)

void solve()
{

    vi a(3);
    for (auto &x : a)
        cin >> x;
    sort(all(a));
    cout << a[2] - a[0] << endl;
}
int main()
{

    // fast IO

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}