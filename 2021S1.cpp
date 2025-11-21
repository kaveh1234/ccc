#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> h(n+1);
    vector<double> w(n);

    for (int i = 0; i <= n; i++)
        cin >> h[i];

    for (int i = 0; i < n; i++)
        cin >> w[i];

    double total = 0.0;

    for (int i = 0; i < n; i++) {
        total += (h[i] + h[i+1]) * 0.5 * w[i];
    }

    cout << fixed << setprecision(6) << total << endl;
}
