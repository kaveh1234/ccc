#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;

    vector<int> row(n + 1, 0);
    vector<int> col(m + 1, 0);

    for (int i = 0; i < k; i++) {
        char t;
        long long x;
        cin >> t >> x;

        if (t == 'R') row[x] ^= 1;
        else col[x] ^= 1;
    }

    long long R = 0, C = 0;
    for (int x : row) R += x;
    for (int x : col) C += x;

    long long gold = R * (m - C) + C * (n - R);
    cout << gold << "\n";
}
