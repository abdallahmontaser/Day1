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
    int n; cin >> n;
    vector<int>ve(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> ve[i];
        ve[i] *= -1;
    }
    n++;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (ve[i + 1] >= ve[i]) {
            ans += (ve[i + 1] - ve[i]);
        }
    }
    cout << ans << "\n";
    return 0;
}
