#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  return a.first * b.second < a.second * b.first;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v;
  for (int i=1; i<=n; i++) for (int j=0; j<=i; j++) {
    int g = gcd(i, j);
    v.push_back({j / g, i / g});
  }
  sort(v.begin(), v.end(), cmp);
  v.erase(unique(v.begin(), v.end()), v.end());

  cout << v.size() << "\n";
  for (auto &p : v) {
    cout << p.first << "/" << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}