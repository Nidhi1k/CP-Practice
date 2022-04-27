// link : https://codeforces.com/problemset/problem/110/A

#include <iostream>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    int c = 0;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            c++;
        n /= 10;
    }

    cout << ((c == 4 || c == 7) ? "YES" : "NO") << endl;
    return 0;
}