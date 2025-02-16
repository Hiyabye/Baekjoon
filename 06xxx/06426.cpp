#include <iostream>
#include <set>
using namespace std;

bool solve(int idx) {
  int z, i, m, l; cin >> z >> i >> m >> l;
  if (z == 0 && i == 0 && m == 0 && l == 0) return false;

  set<int> ans; l = (z * l + i) % m;
  while (ans.find(l) == ans.end()) {
    ans.insert(l);
    l = (z * l + i) % m;
  }
  cout << "Case " << idx << ": " << ans.size() << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}