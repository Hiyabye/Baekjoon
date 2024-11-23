#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  return a.first * b.second < b.first * a.second;
}

void solve(void) {
  int n, p, q; cin >> n >> p >> q;

  vector<pair<int, int>> f;
  for (int i=1; i<=n; i++) for (int j=1; j<i; j++) {
    if (gcd(j, i) != 1) continue;
    if (i < j * p && i > j * q) f.push_back(make_pair(j, i));
  }

  sort(f.begin(), f.end(), cmp);
  for (int i=0; i<f.size(); i++) {
    cout << f[i].first << "/" << f[i].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}