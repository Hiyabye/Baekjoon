#include <iostream>
#include <map>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  map<int, bool> mp;
  mp[m] = true;
  for (int i=0; i<n-2; i++) {
    int x; cin >> x;
    mp[x] = true;
  }

  for (int i=1; i<=n; i++) {
    if (mp.find(i) == mp.end()) {
      cout << i << "\n";
      return true;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}