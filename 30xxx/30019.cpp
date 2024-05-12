#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int> &v) {
  int k, s, e; cin >> k >> s >> e;

  if (s < v[k]) return false;
  else v[k] = e;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;
  vector<int> v(n+1, 0);
  while (m--) cout << (solve(v) ? "YES" : "NO") << "\n";
  return 0;
}