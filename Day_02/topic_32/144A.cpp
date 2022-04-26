// https://codeforces.com/problemset/problem/144/A
// link : https://codeforces.com/problemset/problem/144/A
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

void solve()
{
    // code here
    int n;
    cin >> n;
    vi a(n);
    int maxH = -1, maxHidx = -1, minH = INF, minHidx = -1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x > maxH)
        {
            maxH = x;
            maxHidx = i;
        }
        if (x <= minH)
        {
            minH = x;
            minHidx = i;
        }
    }
    int ans = maxHidx + (n - 1 - minHidx);
    if (minHidx < maxHidx)
        ans--;
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