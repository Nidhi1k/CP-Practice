// link : https://codeforces.com/problemset/problem/785/A

// header file
#include <bits/stdc++.h>
using namespace std;
// useful - macros
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define all(v) (v).begin(), v.end()
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define endl '\n'
#define mod 1000000007 // 1e9+7
#define INF INT_MAX
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int f(string s)
{
    if (s == "Icosahedron")
        return 20;
    if (s == "Cube")
        return 6;
    if (s == "Tetrahedron")
        return 4;
    if (s == "Dodecahedron")
        return 12;
    return 8;
}
void solve()
{
    // code here
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        ans += f(s);
    }
    cout << ans << endl;
}
int main()
{
    // fast IO
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // input-output file
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}