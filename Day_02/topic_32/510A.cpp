// link : https://codeforces.com/problemset/problem/510/A
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int start = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i & 1)
            {
                cout << "#";
            }
            else
            {
                if (j > 1 && j < m)
                    cout << ".";
                else if (j == 1 && start == 0)
                    cout << ".";
                else if (j == 1 && start == 1)
                    cout << "#";
                else if (j == m && start == 0)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        if (i % 2 == 0)
            start = (start + 1) % 2;
        cout << endl;
    }
    return 0;
}