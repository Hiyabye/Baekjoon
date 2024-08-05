#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  long long n, m, q; cin >> n >> m >> q;
  unordered_map<string, long long> mp1;
  unordered_map<long long, vector<string>> mp2;
  while (n--) {
    long long g, p; string h; cin >> g >> h >> p;
    mp1[h] = p;
    mp2[g].push_back(h);
  }

  unordered_map<string, long long> mp3;
  while (q--) {
    long long op; cin >> op;
    if (op == 1) {
      string a; long long b; cin >> a >> b;
      if (m < mp1[a] * b) continue;
      m -= mp1[a] * b;
      mp3[a] += b;
    } else if (op == 2) {
      string a; long long b; cin >> a >> b;
      long long c = min(mp3[a], b);
      m += mp1[a] * c;
      mp3[a] -= c;
    } else if (op == 3) {
      string a; long long c; cin >> a >> c;
      mp1[a] += c;
    } else if (op == 4) {
      long long d, c; cin >> d >> c;
      for (auto &i : mp2[d]) mp1[i] += c;
    } else if (op == 5) {
      long long d, e; cin >> d >> e;
      for (auto &i : mp2[d]) {
        mp1[i] = mp1[i] * (100 + e) / 100;
        mp1[i] -= mp1[i] % 10;
      }
    } else if (op == 6) {
      cout << m << "\n";
    } else if (op == 7) {
      long long tot = m;
      for (auto &i : mp3) tot += mp1[i.first] * i.second;
      cout << tot << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}