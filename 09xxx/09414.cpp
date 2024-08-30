#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp--) ret *= base;
  return ret;
}

void solve(void) {
  vector<int> v;
  int x; cin >> x;
  while (x) {
    v.push_back(x);
    cin >> x;
  }
  sort(v.begin(), v.end(), greater<int>());

  long long ans = 0;
  for (int i=0; i<v.size(); i++) {
    ans += 2 * power(v[i], i+1);
    if (ans > 5000000) {
      cout << "Too expensive\n";
      return;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}