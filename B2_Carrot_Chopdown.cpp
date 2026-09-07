#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> freq(m + 2, 0);

    ll total = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
        total += x;
    }
    vector<int> suf(m + 2, 0);

    for (int x = m; x >= 1; x--) {
        suf[x] = suf[x + 1] + freq[x];
    }

    vector<ll> ans(m + 1, 0);

    for (int k = 1; k <= 18 && k <= m; k++) {

        int pw = (1 << k);
        if (pw > m) {
            ans[k] = total;
            continue;
        }

        ll best = 0;

        for (int x = 1; x <= m / pw; x++) {

            ll cur = 0;


            for (int q = 1; q < pw; q++) {
                cur += suf[q * x];
            }

           

            cur += freq[pw * x];

            best = max(best, cur);
        }

        ans[k] = best;
    }


    for (int k = 18; k <= m; k++) {
        ans[k] = total;
    }

    for (int k = 1; k <= m; k++) {
        cout << ans[k] << (k == m ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
