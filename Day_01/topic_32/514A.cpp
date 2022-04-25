// link : https://codeforces.com/contest/514/problem/A

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

ll traveller(ll &n)
{
    if (n < 10)
    {
        if (n == 9)
            return n;
        else
            return min(n, 9 - n);
    }
    ll x = n / 10;
    ll small_num = traveller(x);
    return 1LL * small_num * 10 + min(n % 10, 9 - n % 10);
}
void solve()
{

    ll n;
    cin >> n;
    n = traveller(n);
    cout << n << endl;
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