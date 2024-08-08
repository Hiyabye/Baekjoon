#include <iostream>
#include <unordered_set>
#include <utility>
using namespace std;

struct pair_hash {
  size_t operator()(const pair<int, int> &pair) const {
    return (pair.first << 16) ^ pair.second;
  }
};

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int m, n; cin >> m >> n;

  unordered_set<pair<int, int>, pair_hash> s;
  for (int i=m; i<=n; i++) for (int j=m; j<=n; j++) {
    int g = gcd(i, j);
    s.insert({i / g, j / g});
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}