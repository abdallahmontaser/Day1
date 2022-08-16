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
        ll n; cin >> n;
        ll sum = (n * (n + 1)) / 2;
        cout << sum * 2ll << "\n";
    }
    return 0;
}
