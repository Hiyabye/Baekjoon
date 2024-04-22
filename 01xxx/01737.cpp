#include <cmath>
#include <iostream>
#include <map>
#include <utility>
#define MOD (long long)1e18
using namespace std;

map<pair<int, int>, long long> p;

long long calc(pair<int, int> x) {
  double cur = acos(-1) * x.first + x.second;
  if (cur < 0) return 0;
  if (0 <= cur && cur <= acos(-1)) return 1;
  if (p.find(x) != p.end()) return p[x];
  return p[x] = (calc({x.first, x.second-1}) + calc({x.first-1, x.second})) % MOD;
}

void solve(void) {
  int n; cin >> n;

  cout << calc({0, n});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}