#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(n), t(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    int ps = 0, pt = 0, best = 0;

    for (int i = 0; i < n; i++) {
        ps += s[i];
        pt += t[i];
        if (ps == pt) best = i + 1;
    }

    cout << best << endl;
}
