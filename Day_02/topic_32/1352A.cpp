
// link : https://codeforces.com/problemset/problem/1352/A
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

int countDigit(int n)
{
    int c = 0;
    while (n > 0)
    {
        if (n % 10 > 0)
            c++;
        n /= 10;
    }
    return c;
}
void solve()
{

    int n;
    cin >> n;
    int c = 1;
    cout << countDigit(n) << endl;
    while (n > 0)
    {
        int x = n % 10;
        if (x > 0)
            cout << c * x << " ";
        c = c * 10;
        n /= 10;
    }
    cout << endl;
}
int main()
{

    // fast IO

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}