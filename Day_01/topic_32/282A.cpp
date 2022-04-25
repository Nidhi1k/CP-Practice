// ques link :   https://codeforces.com/problemset/problem/282/A

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
    // code here
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if (s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;
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