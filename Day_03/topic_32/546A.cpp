#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k, w;
    cin >> k >> n >> w;
    int t = k * (w * (w + 1) / 2) - n;
    if (t <= 0)
        t = 0;
    cout << t << endl;
    return 0;
}