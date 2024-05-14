#include <iostream>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n, m, s; cin >> n >> m >> s;

  unordered_map<int, int> add, sub;
  while (n--) {
    int count, from, to; cin >> count >> from >> to;
    if (count > 0) add[to] += count;
    else if (count < 0) sub[from] += count;
  }

  for (int i=1; i<=m; i++) {
    s += sub[i];
    if (s < 0) return true;
    s += add[i];
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}