#include <bits/stdc++.h>
using namespace std;
int n;
int d[1000005] = {0};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    d[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;
        if (i % 3 == 0)
            d[i] = min(d[i / 3] + 1, d[i]);

        if (i % 2 == 0)
            d[i] = min(d[i / 2] + 1, d[i]);
    }

    cout << d[n] << "\n";
    return 0;
}