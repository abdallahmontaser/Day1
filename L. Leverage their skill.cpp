#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) { return ((b == 0) ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }

void Candidate_Elde7k() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

bool ok(int x, int n, int k, vector<ll>ve) {
    for (auto& it : ve) {
        if (it < x) {
            k -= (x - it);
        }
        if (k < 0) return false;
    }
    return (k >= 0);
}

int main() {
    Candidate_Elde7k();
    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;
        vector<ll>ve(n);
        for (auto& it : ve) cin >> it;
        sort(ve.begin(), ve.end());
        ll l = 0, r = 1e13, mid, ans = ve[0];
        while (l <= r) {
            mid = (l + r) / 2;
            if (ok(mid, n, k, ve)) {
                l = mid + 1;
                ans = mid;
            }
            else {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
