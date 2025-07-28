#include <iostream>
#include <set>
#include <vector>
using namespace std;

inline int mex(const set<int> &s) {
  int ret = 0;
  while (s.count(ret)) ret++;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  vector<int> g(n+1, 0);
  for (int i=2; i<=n; i++) {
    set<int> s;
    for (int j=2; j<=i; j++) s.insert(g[j-2] ^ g[i-j]);
    g[i] = mex(s);
  }
  cout << (g[n] ? 1 : 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}