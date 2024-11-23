#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<int, int> cnt;
  for (int i=0; i<10*n; i++) {
    for (int j=0; j<5; j++) {
      int x; cin >> x;
      cnt[x]++;
    }
  }

  bool flag = false;
  for (auto [k, v] : cnt) {
    if (v > 2 * n) {
      flag = true;
      cout << k << " ";
    }
  }
  if (!flag) cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}