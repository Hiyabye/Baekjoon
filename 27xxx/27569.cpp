#include <iostream>
#include <string>
using namespace std;

inline long long concat(long long a, long long b) {
  return stoll(to_string(a) + to_string(b));
}

void solve(void) {
  int n, k; cin >> n >> k;

  long long ans = 0, cur = 0;
  for (int i=1; i<=n; i++) {
    cur = concat(cur, i);
    cur %= k;
    if (cur == 0) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}