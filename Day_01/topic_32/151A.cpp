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

    vi a(8);
    for (auto &x : a)
        cin >> x;

    int drink = a[1] * a[2];                                            // k*l
    int slices = a[3] * a[4];                                           // c*d
    cout << min(drink / a[6], min(slices, a[5] / a[7])) / a[0] << endl; // total toast / number of friend - > toast made by each friend
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