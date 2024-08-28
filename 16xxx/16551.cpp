#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k, c; cin >> k >> c;
  vector<int> v(10);
  for (int i=0; i<10; i++) cin >> v[i];

  for (int mask=0; mask<(1<<10); mask++) {
    int sum = 0;
    for (int i=0; i<10; i++) {
      if (mask & (1 << i)) sum += v[i];
    }
    if (sum == c) {
      cout << k << " YES\n";
      return;
    }
  }
  cout << k << " NO\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}