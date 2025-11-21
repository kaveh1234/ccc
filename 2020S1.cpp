#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> obs(n);

    for (int i = 0; i < n; i++) {
        cin >> obs[i].first >> obs[i].second;
    }

    sort(obs.begin(), obs.end()); // sort by time

    double max_speed = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dt = abs(obs[j].first - obs[i].first);
            double dx = abs(obs[j].second - obs[i].second);
            double speed = dx / dt;
            if (speed > max_speed) {
                max_speed = speed;
            }
        }
    }

    cout << fixed << setprecision(6) << max_speed << endl;
}
