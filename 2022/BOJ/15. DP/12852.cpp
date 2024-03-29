#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000005];
int a[1000005];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;
        a[i] = i - 1;

        if (i % 2 == 0 && d[i] > d[i / 2] + 1)
        {
            d[i] = d[i / 2] + 1;
            a[i] = i / 2;
        }

        if (i % 3 == 0 && d[i] > d[i / 3] + 1)
        {
            d[i] = d[i / 3] + 1;
            a[i] = i / 3;
        }
    }

    cout << d[n] << "\n";
    int cur = n;

    while (true)
    {
        cout << cur << " ";
        if (cur == 1)
            break;
        cur = a[cur];
    }

    cout << "\n";

    return 0;
}