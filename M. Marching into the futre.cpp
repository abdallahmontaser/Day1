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
        int n; cin >> n;
        vector<ll>A(n), B(n), C(n);
        for (auto& it : A) cin >> it;
        for (auto& it : B) cin >> it;
        for (auto& it : C) cin >> it;
        ll mn = 1e18;
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (A[i] + B[i] + C[i] < mn) {
                mn = A[i] + B[i] + C[i];
                idx = i + 1;
            }
        }
        cout << mn << " " << idx << "\n";
    }
    return 0;
}
