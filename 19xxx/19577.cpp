#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int phi(int n) {
  int ret = n;
  for (int i=2; i*i<=n; ++i) {
    if (n % i) continue;
    ret -= ret / i;
    while (!(n % i)) n /= i;
  }
  if (n > 1) ret -= ret / n;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  vector<int> div;
  for (int i=1; i*i<=n; i++) {
    if (n % i) continue;
    div.push_back(i);
    if (i * i != n) div.push_back(n / i);
  }
  sort(div.begin(), div.end());

  for (int x : div) {
    if (x * phi(x) == n) {
      cout << x;
      return;
    }
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}