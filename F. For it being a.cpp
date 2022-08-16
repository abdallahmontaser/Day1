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
    int n, q; cin >> n >> q;
    map<string, bool>ma;
    while (n--) {
        string s; cin >> s;
        ma[s] = true;
    }
    while (q--) {
        string s; cin >> s;
        bool flag = (ma.find(s) != ma.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    s[i] = ch;
                    if (ma.find(s) != ma.end()) {
                        flag = true;
                        break;
                    }
                }
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
