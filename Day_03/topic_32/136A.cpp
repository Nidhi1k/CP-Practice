#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define endl '\n'
#define mod 1e9 + 7
#define pb push_back

void solve()
{
    // code here
    int n;
    cin >> n;
    vi a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i] - 1] = i + 1;
    }
    for (auto x : b)
    {
        cout << x << " ";
    }
}

int main()
{

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}