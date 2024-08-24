#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        vii directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b},
                          {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pii> st1, st2;

        for (auto d : directions) {
            int x = xk + d.first;
            int y = yk + d.second;
            st1.insert({x, y});

            x = xq + d.first;
            y = yq + d.second;
            st2.insert({x, y});
        }

        int ans = 0;

        for (auto pos : st1) {
            if (st2.find(pos) != st2.end())
                ans++;
        }

        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
