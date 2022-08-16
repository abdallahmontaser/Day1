#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) { return ((b == 0) ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }

void Candidate_Elde7k() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

int main() {
    Candidate_Elde7k();
    int T; cin >> T;
    while (T--) {
        int n, k, q; cin >> n >> k >> q;
        vector<int>ve(n + 5), suff(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> ve[i];
        }
        for (int i = n; i >= 1; i--) {
            if (ve[0] == 0) suff[i] = 1;
            suff[i] += suff[i + 1];
        }
        while (q--) {
            int x; cin >> x;
            if (suff[x] <= k) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
