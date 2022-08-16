#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) { return ((b == 0) ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (b / gcd(a, b)) * a; }

void Candidate_Elde7k() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
vector<ll>save;
void Build() {
	const int N = 1e7 + 7;
	vector<int>prime(N, 1);
	prime[0] = prime[1] = 0;
	for (int i = 4; i < N; i += 2) {
		prime[i] = 0;
	}
	for (int i = 3; i * i < N; i += 2) {
		if (prime[i]) {
			for (int j = i * i; j < N; j += i + i) {
				prime[j] = 0;
			}
		}
	}
	for (ll i = 2; i < N; i++) {
		if (prime[i]) {
			if (i * i <= 1e14) {
				save.push_back(i * i);
			}
			else {
				break;
			}
		}
	}
}

int main() {
    Candidate_Elde7k();
	Build();
	int T; cin >> T;
	while (T--) {
		ll x; cin >> x;
		int idx = upper_bound(save.begin(), save.end(), x) - save.begin();
		cout << idx << "\n";
	}
    return 0;
}
