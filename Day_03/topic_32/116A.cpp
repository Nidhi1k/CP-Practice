// Link : https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ans = -1, cap = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cap = cap - a + b;
        ans = max(ans, cap);
    }
    cout << ans << endl;
    return 0;
}