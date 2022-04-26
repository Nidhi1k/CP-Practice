// Ques link : https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int s = 0;
    while (n--)
    {
        int x;
        cin >> x;
        s += x;
    }

    cout << (s > 0 ? "HARD " : "EASY");

    return 0;
}